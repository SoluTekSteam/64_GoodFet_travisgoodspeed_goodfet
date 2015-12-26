//
// Created by Thomas Tannhaeuser on 12/23/15.
//

#ifndef RAW_H
#define RAW_H

#include "app.h"

#define RAW 0x42

#define RAW_CMD_SETUP           0x10
#define RAW_CMD_SET_DIR_INPUT   0x80
#define RAW_CMD_SET_DIR_OUTPUT  0x81
#define RAW_CMD_READ            0x82
#define RAW_CMD_CLEAR           0x83
#define RAW_CMD_SET             0x84

#define TDO_PIN BIT2
#define TDI_PIN BIT1
#define TMS_PIN BIT0
#define TCK_PIN BIT3
#define RST_PIN BIT6
#define TST_PIN BIT0
#define RXD_PIN BIT7
#define TXD_PIN BIT6

#define FLAG_TDO 1<<0
#define FLAG_TDI 1<<1
#define FLAG_TMS 1<<2
#define FLAG_TCK 1<<3
#define FLAG_RST 1<<4
#define FLAG_TST 1<<5
#define FLAG_RXD 1<<6
#define FLAG_TXD 1<<7

#define RAW_SET_TDO_IO_FNCT P5SEL &= ~TDO_PIN
#define RAW_SET_TDO P5OUT |= TDO_PIN
#define RAW_CLR_TDO P5OUT &= ~TDO_PIN
#define RAW_READ_TDO (P5IN & TDO_PIN)
#define RAW_TDO_DIR_INPUT  P5DIR &= ~TDO_PIN
#define RAW_TDO_DIR_OUTPUT P5DIR |= TDO_PIN
#define RAW_TDO_DISABLE_PULL_X_R P5REN &= ~TDO_PIN

#define RAW_SET_TDI_IO_FNCT P5SEL &= ~TDI_PIN
#define RAW_SET_TDI P5OUT |= TDI_PIN
#define RAW_CLR_TDI P5OUT &= ~TDI_PIN
#define RAW_READ_TDI (P5IN & TDI_PIN)
#define RAW_TDI_DIR_INPUT  P5DIR &= ~TDI_PIN
#define RAW_TDI_DIR_OUTPUT P5DIR |= TDI_PIN
#define RAW_TDI_DISABLE_PULL_X_R P5REN &= ~TDI_PIN

#define RAW_SET_TMS_IO_FNCT P5SEL &= ~TMS_PIN
#define RAW_SET_TMS P5OUT |= TMS_PIN
#define RAW_CLR_TMS P5OUT &= ~TMS_PIN
#define RAW_READ_TMS (P5IN & TMS_PIN)
#define RAW_TMS_DIR_INPUT  P5DIR &= ~TMS_PIN
#define RAW_TMS_DIR_OUTPUT P5DIR |= TMS_PIN
#define RAW_TMS_DISABLE_PULL_X_R P5REN &= ~TMS_PIN

#define RAW_SET_TCK_IO_FNCT P5SEL &= ~TCK_PIN
#define RAW_SET_TCK P5OUT |= TCK_PIN
#define RAW_CLR_TCK P5OUT &= ~TCK_PIN
#define RAW_READ_TCK (P5IN & TCK_PIN)
#define RAW_TCK_DIR_INPUT  P5DIR &= ~TCK_PIN
#define RAW_TCK_DIR_OUTPUT P5DIR |= TCK_PIN
#define RAW_TCK_DISABLE_PULL_X_R P5REN &= ~TCK_PIN

#define RAW_SET_RST_IO_FNCT P2SEL &= ~RST_PIN
#define RAW_SET_RST P2OUT |= RST_PIN
#define RAW_CLR_RST P2OUT &= ~RST_PIN
#define RAW_READ_RST (P2IN & RST_PIN)
#define RAW_RST_DIR_INPUT  P2DIR &= ~RST_PIN
#define RAW_RST_DIR_OUTPUT P2DIR |= RST_PIN
#define RAW_RST_DISABLE_PULL_X_R P2REN &= ~RST_PIN

#define RAW_SET_TST_IO_FNCT P4SEL &= ~TST_PIN
#define RAW_SET_TST P4OUT|=TST_PIN
#define RAW_CLR_TST P4OUT&=~TST_PIN
#define RAW_READ_TST (P4IN & TST_PIN)
#define RAW_TST_DIR_INPUT  P4DIR &= ~TST_PIN
#define RAW_TST_DIR_OUTPUT P4DIR |= TST_PIN
#define RAW_TST_DISABLE_PULL_X_R P4REN &= ~TST_PIN

#define RAW_SET_RXD_IO_FNCT P3SEL &= ~RXD_PIN
#define RAW_SET_RXD P3OUT|=RXD_PIN
#define RAW_CLR_RXD P3OUT&=~RXD_PIN
#define RAW_READ_RXD (P3IN & RXD_PIN)
#define RAW_RXD_DIR_INPUT  P3DIR &= ~RXD_PIN
#define RAW_RXD_DIR_OUTPUT P3DIR |= RXD_PIN
#define RAW_RXD_DISABLE_PULL_X_R P3REN &= ~RXD_PIN

#define RAW_SET_TXD_IO_FNCT P3SEL &= ~TXD_PIN
#define RAW_SET_TXD P3OUT|=TXD_PIN
#define RAW_CLR_TXD P3OUT&=~TXD_PIN
#define RAW_READ_TXD (P3IN & TXD_PIN)
#define RAW_TXD_DIR_INPUT  P3DIR &= ~TXD_PIN
#define RAW_TXD_DIR_OUTPUT P3DIR |= TXD_PIN
#define RAW_TXD_DISABLE_PULL_X_R P3REN &= ~TXD_PIN

extern app_t const raw_app;

#endif //GOODFET_RAW_H
