void sub_6F694050()
{
  void **v0; // ebx@1

  v0 = (void **)&byte_6FD40C08;
  do
  {
    while ( 1 )
    {
      v0 -= 6;
      if ( *v0 == v0 + 2 )
        break;
      j_free_1(*v0);
      if ( (int *)v0 == dword_6FD40BC0 )
        return;
    }
  }
  while ( (int *)v0 != dword_6FD40BC0 );
}
