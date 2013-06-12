/* $Id: ap_shuffle_playlist.c 44 2008-10-13 06:09:31Z dot $ */

#include <stdio.h>
#include <alsaplayer/control.h>

#include "apctl.h"

int main (int argc, char *argv[])
{
    int session = DEFAULT_SESSION;

    if (argc == 2)
        session = atoi(argv[1]);

    if(ap_session_running(session))
        ap_shuffle_playlist(session);

    return 0;
}
