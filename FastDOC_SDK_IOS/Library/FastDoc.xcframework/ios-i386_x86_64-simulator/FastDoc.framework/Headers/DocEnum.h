#ifndef DocEnum_h
#define DocEnum_h

/** 表單類型 */
typedef enum DocType:NSInteger{
    None = 0,
    DocTypeUniformInvoiceFormat25 = 1,
    DocTypeUniformInvoiceFormat22 = 2,
    DocTypeTaiwanRailwayTicketS = 3,
    DocTypeTaiwanRailwayTicketH = 4,
    DocTypeTHSRTicket = 5
}DocType;

/** 正反面 */
typedef enum DocMode:NSInteger{
    DocModeFront = 0,
    DocModeBack = 1
}DocMode;

/** 畫面直向橫向 */
typedef enum DocOrientation:NSInteger{
    DocOrientationPortrait = 0,
    DocOrientationLandscape = 1
}DocOrientation;

/** 旋轉方向 */
typedef enum CHGDirection:NSInteger{
    CHGDirectionUnkown = 0,
    CHGDirectionPortrait = 1,
    CHGDirectionRight = 2,
    CHGDirectionLeft = 3,
    CHGDirectionUpDown = 4
}CHGDirection;

#endif
