#ifndef EVENT_H_DEFINED
#define EVENT_H_DEFINED

class Event {
public:
    typedef enum Id {
        A =  0, B =  1,
        C =  2, D =  3,
        E =  4, F =  5,
        G =  6, H =  7,
        I =  8, J =  9,
        K = 10, L = 11,
        M = 12, N = 13,
        O = 14, P = 15,
        Q = 16, R = 17,
        S = 18, T = 19,
        U = 20, V = 21,
        W = 22, X = 23,
        Y = 24, Z = 25,
        ESCAPE = 26,
        SPACE  = 27,
        RIGHT  = 28, LEFT   = 29,
        DOWN   = 30, UP     = 31,
        RSHIFT = 32, LSHIFT = 33,
        RCTRL  = 34, LCTRL  = 35,
        TAB    = 36,
        RETURN = 37,
        NUM    = 38
    };
    bool     key[NUM+1];
    bool persist[NUM+1];
    bool  quit;
    bool close;
    struct {
        int  x;
        int  y;
        bool r;
        bool l;
    }    mouse;
    int window;
    bool repeat;

    Event();
    int update();
    void reset();
    bool capture(enum Id key);
};

#endif
