#include"init.h"
#include"insert.h"
#include"print.h"
#include"other.h"
int main()
{
	init();
	int n, m;
	cin >> n;
	node* temp = head;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		insert(temp, m);
		temp = temp->next;
	}
	print(head);
}