void sub_6F72AA70()
{
  void **v0; // ebx@1

  v0 = (void **)&byte_700582C0;
  do
  {
    while ( 1 )
    {
      v0 -= 6;
      if ( *v0 == v0 + 2 )
        break;
      j_free_1(*v0);
      if ( (int *)v0 == dword_70058260 )
        return;
    }
  }
  while ( (int *)v0 != dword_70058260 );
}
