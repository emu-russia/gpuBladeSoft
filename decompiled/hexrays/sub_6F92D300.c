int __thiscall sub_6F92D300(_DWORD *this, char *a2, int a3)
{
  char *v3; // edi@1
  _DWORD *v4; // esi@2
  int v5; // ebx@2
  void *v6; // edx@3
  size_t v7; // ecx@4
  signed int (__stdcall *v9)(int); // eax@9
  size_t v10; // [sp+1Ch] [bp-20h]@6

  v3 = a2;
  if ( a3 > 0 )
  {
    v4 = this;
    v5 = 0;
    while ( 1 )
    {
      v6 = (void *)v4[5];
      if ( (void *)v4[6] != v6 )
      {
        v7 = a3 - v5;
        if ( a3 - v5 > v4[6] - (signed int)v6 )
          v7 = v4[6] - (_DWORD)v6;
        v10 = v7;
        memcpy(v6, v3, v7);
        v4[5] += v10;
        v5 += v10;
        if ( a3 <= v5 )
          return v5;
        v3 += v10;
      }
      v9 = *(signed int (__stdcall **)(int))(*v4 + 52);
      if ( v9 != sub_6F92D480 && ((int (__thiscall *)(_DWORD *, _DWORD))v9)(v4, (unsigned __int8)*v3) != -1 )
      {
        ++v5;
        ++v3;
        if ( a3 > v5 )
          continue;
      }
      return v5;
    }
  }
  return 0;
}
