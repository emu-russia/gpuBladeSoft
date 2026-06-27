void __usercall sub_6F684D20(int a1@<eax>)
{
  int i; // ebx@2
  void *v2; // eax@3
  int v3; // esi@3

  if ( a1 )
  {
    for ( i = a1; ; i = v3 )
    {
      sub_6F684D20(*(_DWORD *)(i + 12));
      v2 = *(void **)(i + 16);
      v3 = *(_DWORD *)(i + 8);
      if ( v2 == (void *)(i + 24) )
      {
        j_free_1((void *)i);
        if ( !v3 )
          return;
      }
      else
      {
        j_free_1(v2);
        j_free_1((void *)i);
        if ( !v3 )
          return;
      }
    }
  }
}
