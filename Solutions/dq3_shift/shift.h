void shift(int k) {
	int sz = (int)mSize;
	k = (k % sz + sz) % sz;
	if (mSize <= 1 || k == 0)	return;

	iterator ft = begin(), lt = end().ptr->prev;
	iterator it = begin();
	while (k--)		++it;
	iterator pt = it.ptr->prev;

	mHeader->next = it.ptr;
	it.ptr->prev = mHeader;
	lt.ptr->next = ft.ptr;
	ft.ptr->prev = lt.ptr;
	pt.ptr->next = mHeader;
	mHeader->prev = pt.ptr;
}