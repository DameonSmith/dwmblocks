//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

    //{"", "~/.local/scripts/statusbar/cpu", 10, 3},


    /*{"", "~/.local/scripts/statusbar/memory", 1, 11},*/

    /*{"", "~/.local/scripts/statusbar/pacpackages", 1, 5},*/

    //{"", "~/.local/scripts/statusbar/crypto", 0, 4},

    //{"", "~/.local/scripts/statusbar/help-icon", 0, 13},

    //{"", "~/.local/scripts/statusbar/popupgrade",   1,      9},

    {"", "~/.local/scripts/statusbar/torrent",      20,      5},

    {"", "~/.local/scripts/statusbar/weather",      18000,   4},

    {"", "~/.local/scripts/statusbar/internet",     5, 12},

    {"", "~/.local/scripts/statusbar/volume",       0,      3},

    {"", "~/.local/scripts/statusbar/battery",      5,      2},

    {"", "~/.local/scripts/statusbar/clock",	    60,	    1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';


