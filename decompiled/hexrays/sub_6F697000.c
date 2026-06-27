void sub_6F697000()
{
  int i; // ebx@1
  int v1; // edx@5
  int v2; // ebx@7
  void *v3; // eax@8
  int v4; // esi@8
  void *v5; // [sp+0h] [bp-1Ch]@3

  for ( i = dword_6FBBD7E8; (int *)i != &dword_6FBBD7E0; i = sub_6F95AC00(i) )
  {
    v1 = *(_DWORD *)(i + 40);
    if ( *(_DWORD *)(v1 + 8) )
    {
      j_j_free_1(*(void **)(v1 + 8));
      v5 = *(void **)(i + 40);
    }
    else
    {
      v5 = *(void **)(i + 40);
    }
    j_j_free_1_0(v5);
  }
  v2 = dword_6FBBD7E4;
  if ( dword_6FBBD7E4 )
  {
    while ( 1 )
    {
      sub_6F684D20(*(_DWORD *)(v2 + 12));
      v3 = *(void **)(v2 + 16);
      v4 = *(_DWORD *)(v2 + 8);
      if ( v3 == (void *)(v2 + 24) )
      {
        j_free_1((void *)v2);
        if ( !v4 )
          break;
      }
      else
      {
        j_free_1(v3);
        j_free_1((void *)v2);
        if ( !v4 )
          break;
      }
      v2 = v4;
    }
  }
  dword_6FBBD7E4 = 0;
  dword_6FBBD7E8 = (int)&dword_6FBBD7E0;
  dword_6FBBD7EC = (int)&dword_6FBBD7E0;
  dword_6FBBD7F0 = 0;
}
