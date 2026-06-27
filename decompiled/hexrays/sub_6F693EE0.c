void sub_6F693EE0()
{
  int v0; // ebx@1
  void *v1; // eax@2
  int v2; // esi@2

  v0 = dword_6FBBD7E4;
  if ( dword_6FBBD7E4 )
  {
    while ( 1 )
    {
      sub_6F684D20(*(_DWORD *)(v0 + 12));
      v1 = *(void **)(v0 + 16);
      v2 = *(_DWORD *)(v0 + 8);
      if ( v1 == (void *)(v0 + 24) )
      {
        j_free_1((void *)v0);
        if ( !v2 )
          return;
      }
      else
      {
        j_free_1(v1);
        j_free_1((void *)v0);
        if ( !v2 )
          return;
      }
      v0 = v2;
    }
  }
}
