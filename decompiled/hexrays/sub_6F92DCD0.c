int __thiscall sub_6F92DCD0(_DWORD *this, char *a2, int a3)
{
  int v3; // edx@1
  char *v4; // ebp@1
  _DWORD *v5; // edi@2
  int v6; // esi@2
  _BYTE *v7; // ebx@3
  _BYTE *v8; // eax@3
  int v9; // ebx@4
  signed int (__stdcall *v11)(int); // eax@9
  int v12; // [sp+44h] [bp+8h]@4
  int v13; // [sp+44h] [bp+8h]@10

  v3 = a3;
  v4 = a2;
  if ( a3 > 0 )
  {
    v5 = this;
    v6 = 0;
    while ( 1 )
    {
      v7 = (_BYTE *)v5[6];
      v8 = (_BYTE *)v5[5];
      if ( v7 != v8 )
      {
        v9 = (v7 - v8) >> 1;
        v12 = v3;
        if ( v9 > v3 - v6 )
          v9 = v3 - v6;
        v6 += v9;
        memcpy(v8, v4, 2 * v9);
        v3 = v12;
        v5[5] += 2 * v9;
        if ( v12 <= v6 )
          return v6;
        v4 += 2 * v9;
      }
      v11 = *(signed int (__stdcall **)(int))(*v5 + 52);
      if ( v11 != sub_6F92DE70 )
      {
        v13 = v3;
        if ( (unsigned __int16)((int (__thiscall *)(_DWORD *, _DWORD))v11)(v5, *(_WORD *)v4) != -1 )
        {
          v3 = v13;
          ++v6;
          v4 += 2;
          if ( v13 > v6 )
            continue;
        }
      }
      return v6;
    }
  }
  return 0;
}
