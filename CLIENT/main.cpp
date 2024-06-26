#include<iostream>
#include <string>

#include "Client.h"
#include "Chat.h"


int main()
{
	std::string clientMessage, serverMessage;

	Client client;
	Chat chat;

	client.createSocket();
	client.connectionToServer();

	chat.startMessage();

	while (1) 
	{
		clientMessage = chat.chatProcessing();
		client.writeData(clientMessage);
		if (clientMessage == "exit") 
		{
			break;
		}
		serverMessage = client.readData();
		chat.messageProcessing(serverMessage);
	}

	client.closeSocket();

	return 0;
}