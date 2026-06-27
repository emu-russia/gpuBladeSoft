void sub_6F72AB40()
{
  void **v0; // ebx@1

  v0 = (void **)&byte_70058108;
  do
  {
    while ( 1 )
    {
      v0 -= 6;
      if ( *v0 == v0 + 2 )
        break;
      j_free_1(*v0);
      if ( (int *)v0 == dword_700580C0 )
        return;
    }
  }
  while ( (int *)v0 != dword_700580C0 );
}
