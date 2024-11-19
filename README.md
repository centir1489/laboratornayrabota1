# *Лабораторная работа №1*
## *Абстрактные структуры данных*
Работу выполнил студент группы *`АБс-324`* *Чередняк Егор*

---
*Цели и задачи работы:* изучение алгоритмов формирования и работы с абстрактными структурами данных.

*Задание к работе:* Самостоятельно решить задачи в соответствии с индивидуальным вариантом.

*Методика выполнения работы:*
1. Разработать алгоритм решения задачи по индивидуальному заданию.
2. Написать и отладить программу решения задачи C++.
3. Протестировать работу программы на различных исходных данных.
4. По запросу преподавателя быть готовым модифицировать алгоритм и добавить операцию работы с данными.


---

### Порядок выполнения программы
1. Приём данных, парсим их для управлением ходом программы.
	- Проверка определённых управляющих переменных, в случае ошибки сообщаем об ошибке.
2. Определяем, что и какую структуру записи мы должны использовать
	- Находим нужный файл и находим нашу записанную структуру данных, если в файле нет структуры с таким именем и такого же типа то выходим из программы.
	- Преобразуем структуру записи в структуру данных
	- Совершаем операцию над этой структурой
	- Преобразуем обратно в структуру записи и записываем json-файл
3. Сохраняем изменения в файле, завершаем работу программы

---

### Реализация структур данных

| **Структура данных** | **Функции (методы для работы с контенерами)**                                           |
| :------------------: | --------------------------------------------------------------------------------------- |
|       *Массив*       | `MPUSH`, `MPUSHINDEX`, `MPOP`, `MLENGTH`, `MGET`                                        |
| *Односвязный список* | `LPUSH_BACK`, `LPUSH_FRONT`, `LPOP_BACK`, `LPOP_FRONT`, `REMOVE_VALUE`, `LFIND`, `LGET` |
| *Двусвязный список*  | `DPUSH_BACK`, `DPUSH_FRONT`, `DPOP_BACK`, `DPOP_FRONT`, `REMOVE_VALUE`, `DFIND`, `DGET` |
|        *Стек*        | `SPUSH`, `SPOP,` `SGET`                                                                 |
|      *Очередь*       | `QPUSH`, `QPOP`, `QGET`                                                                 |
|     *Хэш-тблица*     | `HPUSH`, `HDEL`, `HFIND`, `HGET`                                                        |
|     *АВЛ-Дерево*     | `TPUSH`, `TDEL`, `TFIND`, `TGET`                                                        |

---
