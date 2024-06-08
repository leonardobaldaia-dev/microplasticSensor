# Projeto de Controle de LED com Sensor e Painel Solar

## Integrantes do Projeto
- **Leonardo Baldaia**
  - RM: 557416
- **Lorran dos Santos**
  - RM: 558982
- **Gabriel Caetano**
  - RM: 557582

## Objetivo

O principal objetivo deste projeto é utilizar um Arduino para ler valores de um sensor e de um painel solar, calibrar o sensor e controlar um LED com base nas leituras do sensor. O projeto visa demonstrar como sensores analógicos podem ser utilizados para controlar dispositivos eletrônicos e monitorar valores em tempo real.

## Descrição do Projeto

O projeto consiste em um código Arduino que realiza as seguintes funções principais:

### 1. Inicialização e Calibração do Sensor
- O código lê os valores do sensor durante os primeiros 5 segundos após a inicialização do Arduino.
- Durante este período, ele determina os valores máximo e mínimo do sensor para fins de calibração.

### 2. Leitura de Valores do Sensor e do Painel Solar
- Após a calibração, o código lê continuamente os valores do sensor e do painel solar.

### 3. Mapeamento e Constrição dos Valores do Sensor
- Os valores do sensor são mapeados para uma faixa de 0 a 255, correspondente ao controle de brilho do LED.
- Os valores são restringidos para garantir que permaneçam dentro dos limites desejados.

### 4. Controle do LED
- O LED é controlado com base nos valores lidos do sensor, ajustando seu brilho de acordo com as leituras do sensor.

### 5. Monitoramento Serial
- Os valores do sensor e do painel solar são exibidos no monitor serial para fins de monitoramento em tempo real.

## Ferramentas Utilizadas

- Arduino
- Sensor Analógico
- Painel Solar
- LED
- IDE Arduino

## Contato

Para mais informações, entre em contato com os integrantes do projeto.
