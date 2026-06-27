int sub_6F762650()
{
  int v0; // esi@1
  int *v1; // ebx@1

  v0 = 0;
  v1 = dword_7036E7C4;
  do
  {
    if ( *v1 )
    {
      if ( (*(int (__stdcall **)(int))(*(_DWORD *)*v1 + 100))(*v1) >= 0 )
      {
        sub_6F761BC0(v0);
      }
      else
      {
        while ( (*(int (__stdcall **)(int))(*(_DWORD *)*v1 + 28))(*v1) == -2147024866 )
          ;
      }
    }
    ++v0;
    v1 += 50;
  }
  while ( v0 != 16 );
  return 0;
}
