int __cdecl sub_6F8B1950(int a1)
{
  void (**v1)(void); // esi@1
  void (**v2)(void); // ebx@1

  lock(8);
  v1 = *(void (***)(void))a1;
  v2 = *(void (***)(void))(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  unlock(8);
  if ( v1 )
  {
    while ( 1 )
    {
      --v2;
      if ( v1 > v2 )
        break;
      while ( *v2 )
      {
        (*v2)();
        --v2;
        if ( v1 > v2 )
          goto LABEL_5;
      }
    }
LABEL_5:
    free(v1);
  }
  return 0;
}
