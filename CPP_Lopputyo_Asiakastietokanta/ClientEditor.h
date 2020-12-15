#ifndef CLIENTEDITOR_H
#define CLIENTEDITOR_H

#include "Client.h"

class ClientEditor : public Client
{
public:
	ClientEditor();
	void CreateClient();
	void SaveClient(Client client);
	void ReadClient();
	void DeleteClient(std::string& cAName, bool fwhere);
	void ListClients();
};

#endif // CLIENTEDITOR_H