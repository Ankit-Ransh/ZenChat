const crest = "Global";

function outerLoop() {
    const outer = "Outer";
    function middleLoop () {
        const middle = "Middle";
        function innerLoop() {
            const inner = "Inner";

            console.log("*** Inner *** ----------------------------------------");
            console.log(inner, middle, outer, crest);
            console.log("*** Inner *** ----------------------------------------\n");
        }

        console.log("*** Middle *** ----------------------------------------");
        console.log(middle, outer, crest);
        console.log("*** Middle *** ----------------------------------------\n");
        
        innerLoop();
    }

    console.log("*** Outer *** ----------------------------------------");
    console.log(outer, crest);
    console.log("*** Outer *** ----------------------------------------\n");

    middleLoop();
}

outerLoop();