//ʱ�䣺2019��6��19��13:05:32
//����һ��������ͨ��378ҳ�е���Ϊbookstore��multiset����begin()����ʼ�����������д������������

typedef bool (*pf)(const Sales_data &, const Sales_data &);
//������һ������ָ�����͵ı����� ����ָ��ָ��һ������ֵΪbool���͵Ĳ��ҽ�������const Sales_item&���͵�����Ϊ�����ĺ���
//  pf pa�� �ȼ��� bool(*pa)(const Sales_data &, const Sales_data &)

multiset<Sales_data, pf> bookstore(compareIsbn);
....
pair<const Sales_data, pf>::iterator it = bookstore.begin();
