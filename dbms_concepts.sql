-- ===================================================
-- 1. Creating a Database and Table
-- ===================================================
CREATE DATABASE CompanyDB;

USE CompanyDB;

CREATE TABLE Employees (
    emp_id INT PRIMARY KEY,
    name VARCHAR(50),
    department VARCHAR(50),
    salary DECIMAL(10,2)
);

-- ===================================================
-- 2. Inserting Sample Data
-- ===================================================
INSERT INTO Employees (emp_id, name, department, salary) VALUES
(101, 'Alice', 'HR', 60000),
(102, 'Bob', 'IT', 75000),
(103, 'Charlie', 'Finance', 72000);

-- ===================================================
-- 3. Creating a View
-- ===================================================
CREATE VIEW HighSalaryEmployees AS
SELECT name, department, salary
FROM Employees
WHERE salary > 70000;

-- ===================================================
-- 4. Using Joins (Inner Join, Left Join, Right Join)
-- ===================================================
CREATE TABLE Departments (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50)
);

INSERT INTO Departments VALUES (1, 'HR'), (2, 'IT'), (3, 'Finance');

SELECT e.name, e.salary, d.dept_name
FROM Employees e
INNER JOIN Departments d
ON e.department = d.dept_name;

-- ===================================================
-- 5. Creating a Stored Procedure
-- ===================================================
DELIMITER //

CREATE PROCEDURE GetEmployeeSalary(IN empID INT)
BEGIN
    SELECT name, salary FROM Employees WHERE emp_id = empID;
END //

DELIMITER ;

-- To call the procedure:
CALL GetEmployeeSalary(102);

-- ===================================================
-- 6. Using a Trigger
-- ===================================================
CREATE TABLE EmployeeAudit (
    audit_id INT AUTO_INCREMENT PRIMARY KEY,
    emp_id INT,
    old_salary DECIMAL(10,2),
    new_salary DECIMAL(10,2),
    change_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

DELIMITER //

CREATE TRIGGER BeforeSalaryUpdate
BEFORE UPDATE ON Employees
FOR EACH ROW
BEGIN
    INSERT INTO EmployeeAudit (emp_id, old_salary, new_salary)
    VALUES (OLD.emp_id, OLD.salary, NEW.salary);
END //

DELIMITER ;

-- ===================================================
-- 7. Using an Index
-- ===================================================
CREATE INDEX idx_department ON Employees(department);

-- ===================================================
-- 8. Creating a Function
-- ===================================================
DELIMITER //

CREATE FUNCTION GetTotalSalary()
RETURNS DECIMAL(10,2)
DETERMINISTIC
BEGIN
    DECLARE total DECIMAL(10,2);
    SELECT SUM(salary) INTO total FROM Employees;
    RETURN total;
END //

DELIMITER ;

-- To call the function:
SELECT GetTotalSalary();

-- ===================================================
-- 9. Using CTE (Common Table Expression)
-- ===================================================
WITH HighEarners AS (
    SELECT name, salary FROM Employees WHERE salary > 70000
)
SELECT * FROM HighEarners;

-- ===================================================
-- 10. Using a Transaction
-- ===================================================
START TRANSACTION;

UPDATE Employees SET salary = salary + 5000 WHERE emp_id = 102;

ROLLBACK; -- or COMMIT;
