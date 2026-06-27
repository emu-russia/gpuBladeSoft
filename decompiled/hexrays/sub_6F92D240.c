int __thiscall sub_6F92D240(_DWORD *this, _BYTE *a2, int a3)
{
  _BYTE *v3; // edx@1
  _DWORD *v4; // edi@2
  int v5; // esi@2
  const void *v6; // ecx@3
  size_t v7; // ebx@4
  _BYTE *v9; // ebx@8
  int (__thiscall *v10)(_DWORD); // edx@9
  signed int (*v11)(); // eax@10
  _BYTE *v12; // edx@12
  int v13; // eax@12
  _BYTE *v14; // [sp+30h] [bp+4h]@4

  v3 = a2;
  if ( a3 > 0 )
  {
    v4 = this;
    v5 = 0;
    while ( 1 )
    {
      v6 = (const void *)v4[2];
      if ( (const void *)v4[3] == v6 )
      {
        v9 = v3;
      }
      else
      {
        v7 = a3 - v5;
        v14 = v3;
        if ( a3 - v5 > v4[3] - (signed int)v6 )
          v7 = v4[3] - (_DWORD)v6;
        v5 += v7;
        memcpy(v3, v6, v7);
        v4[2] += v7;
        if ( a3 <= v5 )
          return v5;
        v9 = &v14[v7];
      }
      v10 = *(int (__thiscall **)(_DWORD))(*v4 + 40);
      if ( (char *)v10 == (char *)sub_6F92D0B0 )
      {
        v11 = *(signed int (**)())(*v4 + 36);
        if ( v11 == sub_6F92D5D0 || ((int (__thiscall *)(_DWORD *))v11)(v4) == -1 )
          return v5;
        v12 = (_BYTE *)v4[2];
        LOBYTE(v13) = *v12;
        v4[2] = v12 + 1;
      }
      else
      {
        v13 = v10(v4);
        if ( v13 == -1 )
          return v5;
      }
      ++v5;
      v3 = v9 + 1;
      *v9 = v13;
      if ( a3 <= v5 )
        return v5;
    }
  }
  return 0;
}
