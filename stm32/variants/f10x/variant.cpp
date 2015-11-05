/**
 * @authors Avik De <avikde@gmail.com>

  This file is part of koduino <https://github.com/avikde/koduino>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
#include "variant.h"
#include "types.h"
#include "USARTClass.h"
#include "adc.h"

// >>> Autogenerated by variant_codegen.py >>>

const uint8_t PA0 = 0;
const uint8_t PA1 = 1;
const uint8_t PA2 = 2;
const uint8_t PA3 = 3;
const uint8_t PA4 = 4;
const uint8_t PA5 = 5;
const uint8_t PA6 = 6;
const uint8_t PA7 = 7;
const uint8_t PA8 = 8;
const uint8_t PA9 = 9;
const uint8_t PA10 = 10;
const uint8_t PA11 = 11;
const uint8_t PA12 = 12;
const uint8_t PA13 = 13;
const uint8_t PA14 = 14;
const uint8_t PA15 = 15;
const uint8_t PB0 = 16;
const uint8_t PB1 = 17;
const uint8_t PB2 = 18;
const uint8_t PB3 = 19;
const uint8_t PB4 = 20;
const uint8_t PB5 = 21;
const uint8_t PB6 = 22;
const uint8_t PB7 = 23;
const uint8_t PB8 = 24;
const uint8_t PB9 = 25;
const uint8_t PB10 = 26;
const uint8_t PB11 = 27;
const uint8_t PB12 = 28;
const uint8_t PB13 = 29;
const uint8_t PB14 = 30;
const uint8_t PB15 = 31;
const uint8_t PC13 = 32;
const uint8_t PC14 = 33;
const uint8_t PC15 = 34;

PinInfo PIN_MAP[] = {
  {GPIOA, 0, 0, 0, TIMER2, 1, NOT_SET, NOT_SET},
  {GPIOA, 1, 1, 0, TIMER2, 2, NOT_SET, NOT_SET},
  {GPIOA, 2, 2, 0, TIMER2, 3, NOT_SET, NOT_SET},
  {GPIOA, 3, 3, 0, TIMER2, 4, NOT_SET, NOT_SET},
  {GPIOA, 4, 4, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 5, 5, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 6, 6, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 7, 7, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 8, NOT_SET, 0, TIMER1, 1, NOT_SET, NOT_SET},
  {GPIOA, 9, NOT_SET, 0, TIMER1, 2, NOT_SET, NOT_SET},
  {GPIOA, 10, NOT_SET, 0, TIMER1, 3, NOT_SET, NOT_SET},
  {GPIOA, 11, NOT_SET, 0, TIMER1, 4, NOT_SET, NOT_SET},
  {GPIOA, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 15, NOT_SET, 1, TIMER2, 1, NOT_SET, NOT_SET},
  {GPIOB, 0, 8, 0, TIMER3, 3, NOT_SET, NOT_SET},
  {GPIOB, 1, 9, 0, TIMER3, 4, NOT_SET, NOT_SET},
  {GPIOB, 2, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 3, NOT_SET, 1, TIMER2, 2, NOT_SET, NOT_SET},
  {GPIOB, 4, NOT_SET, 1, TIMER3, 1, NOT_SET, NOT_SET},
  {GPIOB, 5, NOT_SET, 1, TIMER3, 2, NOT_SET, NOT_SET},
  {GPIOB, 6, NOT_SET, 0, TIMER4, 1, NOT_SET, NOT_SET},
  {GPIOB, 7, NOT_SET, 0, TIMER4, 2, NOT_SET, NOT_SET},
  {GPIOB, 8, NOT_SET, 0, TIMER4, 3, NOT_SET, NOT_SET},
  {GPIOB, 9, NOT_SET, 0, TIMER4, 4, NOT_SET, NOT_SET},
  {GPIOB, 10, NOT_SET, 1, TIMER2, 3, NOT_SET, NOT_SET},
  {GPIOB, 11, NOT_SET, 1, TIMER2, 4, NOT_SET, NOT_SET},
  {GPIOB, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
};

const uint8_t TIMER1 = 0;
const uint8_t TIMER2 = 1;
const uint8_t TIMER3 = 2;
const uint8_t TIMER4 = 3;

TimerChannelData timer1ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer2ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer3ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer4ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};

TimerInfo TIMER_MAP[] = {
  {TIM1, TIM1_IRQn, 1000, 0, timer1ch},
  {TIM2, TIM2_IRQn, 1000, 0, timer2ch},
  {TIM3, TIM3_IRQn, 1000, 0, timer3ch},
  {TIM4, TIM4_IRQn, 1000, 0, timer4ch},
  // ^^^ Look up IRQn names from CMSIS device header ^^^
};

// <<< Autogenerated by variant_codegen.py <<<


// Use the 3 basic timers and two others
TimebaseChannel TIMEBASE_MAP[] = {
  {.timer = NOT_SET, .isr = 0}, // 0:System clock, i.e. millis
};
const uint8_t SYSCLK_TIMEBASE = 3;

// Serial
USARTInfo USART_MAP[4] = {
  { USART1, USART1_IRQn, PA9, PA10 },
  { USART2, USART2_IRQn, PA2, PA3 },
  { USART3, USART3_IRQn, PB10, PB11 },
};
USARTClass Serial1(&USART_MAP[0]);
USARTClass Serial2(&USART_MAP[1]);
USARTClass Serial3(&USART_MAP[2]);

bool isTimer32Bit(uint8_t tim) {
  return false;
}

uint8_t numChannelsInTimer(uint8_t tim) {
  return 4;
}

bool isAnalogPin(uint8_t pin) {
  return (PIN_MAP[pin].adcChannel != NOT_SET);
}

void variantInit() {
  TIMEBASE_MAP[0].timer = TIMER10;
  TIMEBASE_MAP[1].timer = TIMER11;
  TIMEBASE_MAP[2].timer = TIMER13;
  TIMEBASE_MAP[3].timer = TIMER14;
  TIMEBASE_MAP[4].timer = TIMER6;
  TIMEBASE_MAP[5].timer = TIMER7;

  // GPIO
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
  // SYSCFG - needed for EXTI
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);

  // Timer clocks
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM6, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM7, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM12, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM13, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM14, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM8, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM9, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM10, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM11, ENABLE);

  // USART
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART6, ENABLE);

  // ADC(s)
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE);
  adcInit(ADC1);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC2, ENABLE);
  adcInit(ADC2);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC3, ENABLE);
  adcInit(ADC3);
}
