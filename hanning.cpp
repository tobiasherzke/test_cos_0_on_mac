#include "hanning.h"
float MHAWindow::hanning(float)  
{
    if( (x < -1) || (x >= 1) )
        return 0;
    return 0.5 + 0.5 * cos( M_PI*x );
}
