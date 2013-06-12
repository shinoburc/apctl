/* $Id: ap_shuffle_playlist_and_next.c 45 2008-10-13 06:12:37Z dot $ */

#include <stdio.h>
#include <alsaplayer/control.h>

#include "apctl.h"

int main (int argc, char *argv[])
{
    int session = DEFAULT_SESSION;

    if (argc == 2)
        session = atoi(argv[1]);

    if(ap_session_running(session)){
        ap_shuffle_playlist(session);
        ap_next(session);
    }

    return 0;
}
