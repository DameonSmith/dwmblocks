//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
    //{"", "~/.local/bin/statusbar/cpu", 10, 3},
    

    /*{"", "~/.local/bin/statusbar/memory", 1, 11},*/

    /*{"", "~/.local/bin/statusbar/pacpackages", 1, 5},*/

    //{"", "~/.local/bin/statusbar/crypto", 0, 4},
    
    //{"", "~/.local/bin/statusbar/help-icon", 0, 13},
    
    //{"", "~/.local/bin/statusbar/popupgrade",   1,      9},

    {"", "~/.local/bin/statusbar/torrent",      20,      5},

    {"", "~/.local/bin/statusbar/weather",      18000,   4},

    {"", "~/.local/bin/statusbar/internet",     5, 12},

    {"", "~/.local/bin/statusbar/volume",       0,      3},

    {"", "~/.local/bin/statusbar/battery",      5,      2},
    
    {"", "~/.local/bin/statusbar/clock",	    60,	    1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';


