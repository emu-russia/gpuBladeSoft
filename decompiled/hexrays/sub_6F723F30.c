void sub_6F723F30()
{
  int *v0; // ebx@1
  void *v1; // eax@1
  void **v2; // ecx@2

  v0 = dword_6FBBFBC0;
  v1 = (void *)dword_6FBBFBC0[0];
  if ( (_DWORD *)dword_6FBBFBC0[0] == &dword_6FBBFBC0[2] )
    goto LABEL_4;
  while ( 1 )
  {
    j_free_1(v1);
    v2 = (void **)(v0 - 8);
    if ( v0 == dword_6FBBDBE0 )
      break;
    while ( 1 )
    {
      v0 = (int *)v2;
      v1 = *v2;
      if ( *v2 != v2 + 2 )
        break;
LABEL_4:
      v2 = (void **)(v0 - 8);
      if ( v0 == dword_6FBBDBE0 )
        return;
    }
  }
}
