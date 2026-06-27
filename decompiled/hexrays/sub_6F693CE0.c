void sub_6F693CE0()
{
  void **v0; // ebx@1

  v0 = (void **)&byte_6FD41120;
  do
  {
    while ( 1 )
    {
      v0 -= 6;
      if ( *v0 == v0 + 2 )
        break;
      j_free_1(*v0);
      if ( (int *)v0 == dword_6FD410C0 )
        return;
    }
  }
  while ( (int *)v0 != dword_6FD410C0 );
}
