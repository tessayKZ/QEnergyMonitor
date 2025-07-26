QEnergyMonitor
\*\*Динамическая панель мониторинга энергии\*\*  
Android‑приложение на Qt/QML (компиляция под Android), где UI полностью на QML, а логика — на C++.
\## Архитектура
\- \*\*C++\*\*: `EnergyMonitorSimulator` генерирует данные каждые ~500 мс, экспонирует их в QML через `Q\_PROPERTY`, посылает сигналы при изменении.
\- \*\*QML\*\*: набор кастомных компонентов (циферблаты, бары, индикаторы) реагирует на свойства C++, управляет анимациями и кнопками.
\## Сборка и запуск
1\. Клонируйте:
&nbsp;  ```bash
&nbsp;  git clone https://github.com/yourusername/QEnergyMonitor.git
&nbsp;  cd QEnergyMonitor
