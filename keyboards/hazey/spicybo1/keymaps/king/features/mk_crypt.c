#include "mk_crypt.h"


#define CRYPT_0 "?TD1Q!"
#define CRYPT_1 "JS9[£a"
#define CRYPT_2 "S4qbi."
#define CRYPT_3 "qpFi(1"
#define CRYPT_4 "-sdRJ_"
#define CRYPT_5 "1KDoe0"

bool process_crypt_word(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    	case MK_CRYPT_0:
    		if (record->event.pressed) {
        		send_string(CRYPT_0);
        	}
        	break;
        case MK_CRYPT_1:
        	if (record->event.pressed) {
        		send_string(CRYPT_1);
        	}
        	break;
    	case MK_CRYPT_2:
    		if (record->event.pressed) {
        		send_string(CRYPT_2);
        	}
        	break;
    	case MK_CRYPT_3:
    		if (record->event.pressed) {
        		send_string(CRYPT_3);
        	}
        	break;
    	case MK_CRYPT_4:
    		if (record->event.pressed) {
        		send_string(CRYPT_4);
        	}
        	break;
    	case MK_CRYPT_5:
    		if (record->event.pressed) {
        		send_string(CRYPT_5);
        	}
        	break;
	}
    return true;
};
