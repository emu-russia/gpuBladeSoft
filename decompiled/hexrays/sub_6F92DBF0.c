int __thiscall sub_6F92DBF0(_DWORD *this, _WORD *a2, int a3)
{
  _DWORD *v3; // edi@1
  int v4; // esi@1
  int v5; // edx@1
  _WORD *v6; // ecx@1
  _BYTE *v7; // ebx@2
  _BYTE *v8; // eax@2
  int v9; // ebx@3
  _WORD *v11; // ebp@7
  int (__thiscall *v12)(_DWORD); // ebx@8
  signed int (*v13)(); // eax@9
  __int16 *v14; // ecx@11
  __int16 v15; // ax@11
  _WORD *v16; // [sp+30h] [bp+4h]@5
  int v17; // [sp+34h] [bp+8h]@3
  int v18; // [sp+34h] [bp+8h]@10
  int v19; // [sp+34h] [bp+8h]@15

  v3 = this;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v7 = (_BYTE *)v3[3];
      v8 = (_BYTE *)v3[2];
      if ( v7 == v8 )
      {
        v11 = v6;
      }
      else
      {
        v9 = (v7 - v8) >> 1;
        v17 = v5;
        if ( v9 > v5 - v4 )
          v9 = v5 - v4;
        v16 = v6;
        v4 += v9;
        memcpy(v6, v8, 2 * v9);
        v5 = v17;
        v3[2] += 2 * v9;
        if ( v17 <= v4 )
          return v4;
        v11 = &v16[v9];
      }
      v12 = *(int (__thiscall **)(_DWORD))(*v3 + 40);
      if ( (char *)v12 == (char *)sub_6F92DA70 )
      {
        v13 = *(signed int (**)())(*v3 + 36);
        if ( v13 == sub_6F92DFC0 )
          return v4;
        v18 = v5;
        if ( (unsigned __int16)((int (__thiscall *)(_DWORD *))v13)(v3) == -1 )
          return v4;
        v14 = (__int16 *)v3[2];
        v5 = v18;
        v15 = *v14;
        v3[2] = v14 + 1;
      }
      else
      {
        v19 = v5;
        v15 = v12(v3);
        v5 = v19;
      }
      if ( v15 != -1 )
      {
        ++v4;
        v6 = v11 + 1;
        *v11 = v15;
        if ( v5 > v4 )
          continue;
      }
      return v4;
    }
  }
  return v4;
}
