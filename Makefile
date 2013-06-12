# $Id: Makefile 44 2008-10-13 06:09:31Z dot $

TARGET = ap_shuffle_playlist ap_shuffle_playlist_and_next
CC	= gcc
LIBS = -lalsaplayer

INSTALL=/usr/bin/install -c -m 755
INSTALL_DIR=/usr/local/bin/


all: $(TARGET)

ap_shuffle_playlist: ap_shuffle_playlist.c apctl.h
	$(CC) $(LIBS) -o $@ ap_shuffle_playlist.c

ap_shuffle_playlist_and_next: ap_shuffle_playlist_and_next.c apctl.h
	$(CC) $(LIBS) -o $@ ap_shuffle_playlist_and_next.c

install: $(TARGET)
	for file in $(TARGET); \
	do \
		$(INSTALL) $$file $(INSTALL_DIR)$$file; \
	done

clean cleanup:
	rm -f $(TARGET)
