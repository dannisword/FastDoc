//
//  CGConfigDefine.h
//  CGImageRecognitionSDK
//
//  Created by Leo on 2018/11/23.
//  Copyright © 2018年 leotseng. All rights reserved.
//
#ifndef CHGConfigDefine_h

#pragma mark - 中間takeBox的長寬比

// 身份證、健保卡、駕照
#define CARD_SCALE 1.6                          // 長寬比例 10:16
#define CARD_LANDSCAPE_HEIGHT_SCALE 0.71        // 橫向高度占比
#define CARD_LANDSCAPE_HEIGHT_OFFSET 1          // Y軸偏移

#define CARD_PORTRAIT_WIDTH_SCALE 0.93          // 直向寬度占比
#define CARD_PORTRAIT_WIDTH_OFFSET 1            // Y軸偏移

// 信用卡
#define CREDIT_CARD_SCALE 1.618                 // 信用卡比例

// 駕照
#define DRIVER_LICENSE_SCALE 1.436              // 7.9 * 5.5

// 身心障礙手冊
#define DISABILITY_IDENTIFICATION_SCALE 1.3822  // 980 * 709

// QRCode
#define QRCODE_SCALE 1.8

// 護照
#define PASSPORT_MRZ_SCALE 1.42                     // 長寬比例 88:125
#define PASSPORT_MRZ_LANDSCAPE_HEIGHT_SCALE 0.71     // 高度占比
#define PASSPORT_MRZ_LANDSCAPE_HEIGHT_OFFSET 1      // Y軸偏移

#define PASSPORT_MRZ_PORTRAIT_WIDTH_SCALE 0.93       // 橫向寬度占比
#define PASSPORT_MRZ_PORTRAIT_WIDTH_OFFSET 1        // Y軸偏移

#define PASSPORT_MRZ_HEIGHT 88                      // 護照高度
#define PASSPORT_MRZ_SUB_SCALE 10.7                 // 長寬比例 10.65:114
#define PASSPORT_MRZ_SUB_HEIGHT_SCALE 0.1210        // 高度占比
#define PASSPORT_MRZ_SUB_WIDTH_SCALE 0.912          // 寬度占比
#define PASSPORT_MRZ_SUB_HEIGHT_OFFSET 70.1         // Y軸偏移

// 居留證
#define RESIDENT_CERTIFICATE_MRZ_SCALE 1.585                    // 長寬比例 54:85.6
#define RESIDENT_CERTIFICATE_MRZ_LANDSCAPE_HEIGHT_SCALE 0.7     // 高度占比
#define RESIDENT_CERTIFICATE_MRZ_LANDSCAPE_HEIGHT_OFFSET 1      // Y軸偏移

#define RESIDENT_CERTIFICATE_MRZ_PORTRAIT_WIDTH_SCALE 0.93       // 橫向寬度占比
#define RESIDENT_CERTIFICATE_MRZ_PORTRAIT_WIDTH_OFFSET 1        // Y軸偏移

#define RESIDENT_CERTIFICATE_MRZ_HEIGHT 54                // 居留證高度

#define RESIDENT_CERTIFICATE_MRZ_SUB_SCALE 4.46           // 長寬比例 17.41:77.7
#define RESIDENT_CERTIFICATE_MRZ_SUB_WIDTH_SCALE 1  // 寬度占比
#define RESIDENT_CERTIFICATE_MRZ_SUB_HEIGHT_SCALE 0.29629   //高度占比
#define RESIDENT_CERTIFICATE_MRZ_SUB_HEIGHT_OFFSET 0.6074      // Y軸偏移

// 機車行照
#define SCOOTER_VEHICLE_LICENSE_SCALE 0.72043 // 長寬比例 93:67
#define SCOOTER_VEHICLE_LICENSE_LANDSCAPE_HEIGHT_SCALE 0.83         // 高度占比
#define SCOOTER_VEHICLE_LICENSE_LANDSCAPE_HEIGHT_OFFSET 1           // Y軸偏移

#define SCOOTER_VEHICLE_LICENSE_PORTRAIT_WIDTH_SCALE 0.85    // 橫向寬度占比
#define SCOOTER_VEHICLE_LICENSE_PORTRAIT_WIDTH_OFFSET 1      // Y軸偏移

// 汽車行照
#define CAR_VEHICLE_LICENSE_SCALE 1.53 // 長寬比例 145:100
#define CAR_VEHICLE_LICENSE_LANDSCAPE_HEIGHT_SCALE 0.71      // 高度占比
#define CAR_VEHICLE_LICENSE_LANDSCAPE_HEIGHT_OFFSET 1       // Y軸偏移

#define CAR_VEHICLE_LICENSE_PORTRAIT_WIDTH_SCALE 0.95       // 橫向寬度占比
#define CAR_VEHICLE_LICENSE_PORTRAIT_WIDTH_OFFSET 1         // Y軸偏移

// 文件
#define DOC_LANDSCAPE_SCALE 1.414285 // 長寬比例 210:297
#define DOC_LANDSCAPE_HEIGHT_SCALE 0.83      // 高度占比
#define DOC_LANDSCAPE_HEIGHT_OFFSET 1      // Y軸偏移

#define DOC_PORTRAIT_SCALE 0.707070 // 長寬比例 210:297
#define DOC_PORTRAIT_WIDTH_SCALE 0.95      // 高度占比
#define DOC_PORTRAIT_WIDTH_OFFSET 1      // Y軸偏移

#define UniformInvoiceFormat25_SCALE 0.6433
#define UniformInvoiceFormat25_LANDSCAPE_HEIGHT_SCALE 0.71        // 橫向高度占比
#define UniformInvoiceFormat25_LANDSCAPE_HEIGHT_OFFSET 1          // Y軸偏移

#define UniformInvoiceFormat25_PORTRAIT_WIDTH_SCALE 0.85         // 直向寬度占比
#define UniformInvoiceFormat25_PORTRAIT_WIDTH_OFFSET 1            // Y軸偏移


#define UniformInvoiceFormat22_SCALE 0.25        // 長寬比例 10:16
#define UniformInvoiceFormat22_LANDSCAPE_HEIGHT_SCALE 0.71        // 橫向高度占比
#define UniformInvoiceFormat22_LANDSCAPE_HEIGHT_OFFSET 1          // Y軸偏移

#define UniformInvoiceFormat22_PORTRAIT_WIDTH_SCALE 0.85          // 直向寬度占比
#define UniformInvoiceFormat22_PORTRAIT_WIDTH_OFFSET 1            // Y軸偏移

#define TaiwanRailwayTicketS_SCALE 0.624        // 長寬比例 10:16
#define TaiwanRailwayTicketS_LANDSCAPE_HEIGHT_SCALE 0.71        // 橫向高度占比
#define TaiwanRailwayTicketS_LANDSCAPE_HEIGHT_OFFSET 1          // Y軸偏移

#define TaiwanRailwayTicketS_PORTRAIT_WIDTH_SCALE 0.85          // 直向寬度占比
#define TaiwanRailwayTicketS_PORTRAIT_WIDTH_OFFSET 1            // Y軸偏移


#define TaiwanRailwayTicketH_SCALE 1.5789        // 長寬比例 10:16
#define TaiwanRailwayTicketH_LANDSCAPE_HEIGHT_SCALE 0.6        // 橫向高度占比
#define TaiwanRailwayTicketH_LANDSCAPE_HEIGHT_OFFSET 1          // Y軸偏移

#define TaiwanRailwayTicketH_PORTRAIT_WIDTH_SCALE 0.7          // 直向寬度占比
#define TaiwanRailwayTicketH_PORTRAIT_WIDTH_OFFSET 1            // Y軸偏移


#define THSRTicket_SCALE 1.5772        // 長寬比例 10:16
#define THSRTicket_LANDSCAPE_HEIGHT_SCALE 0.71        // 橫向高度占比
#define THSRTicket_LANDSCAPE_HEIGHT_OFFSET 1          // Y軸偏移

#define THSRTicket_PORTRAIT_WIDTH_SCALE 0.85         // 直向寬度占比
#define THSRTicket_PORTRAIT_WIDTH_OFFSET 1            // Y軸偏移


#define CHGConfigDefine_h

#endif /* CHGConfigDefine_h */
