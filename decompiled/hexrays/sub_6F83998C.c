int sub_6F83998C(int a1, const char *a2, ...)
{
  signed int v3; // [sp+1Ch] [bp-Ch]@9
  va_list va; // [sp+38h] [bp+10h]@1

  va_start(va, a2);
  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 68) )
  {
    v3 = *(_DWORD *)(a1 + 72);
    if ( !v3 )
    {
      v3 = 64;
      if ( *(_DWORD *)(a1 + 68) != a1 )
        sub_6F839044(a1, (int)"Libpng jmp_buf still allocated");
    }
    if ( v3 != *(size_t *)(int *)va )
    {
      sub_6F839262(a1, "Application jmp_buf size changed");
      return 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
    if ( *(size_t *)(int *)va > 0x40 )
    {
      *(_DWORD *)(a1 + 68) = sub_6F83B561(a1, *(size_t *)(int *)va);
      if ( !*(_DWORD *)(a1 + 68) )
        return 0;
      *(_DWORD *)(a1 + 72) = *(size_t *)(int *)va;
    }
    else
    {
      *(_DWORD *)(a1 + 68) = a1;
    }
  }
  *(_DWORD *)(a1 + 64) = a2;
  return *(_DWORD *)(a1 + 68);
}
