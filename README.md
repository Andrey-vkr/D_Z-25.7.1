В чате хранение всех данных происходит в БД на сервере.
Созданная база данных MySQL, находится в файле Data_chat.sql

Клиенту при своём старте необходимо связаться с сервером по IP-адресу сервера и порту, зарегистрироваться на нём, передав ему свой логин и пароль. 
Если регистрация прошла успешно, то сервер в ответ высылает список пользователей и историю сообщений. 

В базе данных сохранены три пользователя:

Ivan (логин: Iv;  пароль: 12345)

Alexey (логин: Al; пароль: 12345)

Marina (логин: Ma; пароль: 12345)


Также добавлены следующие сообщения: 

'Hello',

'Good morning',

'Good evening',

'How are you',

'I am fine',

'message is good'.

