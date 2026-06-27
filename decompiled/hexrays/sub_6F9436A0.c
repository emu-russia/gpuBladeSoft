int __thiscall sub_6F9436A0(int this, int a2, __int64 a3, int a4, unsigned int a5)
{
  int v5; // eax@1
  int v6; // ebx@1
  int v7; // ecx@1
  unsigned int v8; // ebx@1
  int v9; // ebp@1
  bool v10; // dl@1
  int v11; // edi@2
  unsigned int v12; // ecx@5
  __int64 v13; // rcx@11
  int v15; // ecx@12
  __int64 v16; // [sp+0h] [bp-44h]@1
  int v17; // [sp+8h] [bp-3Ch]@1
  char v18; // [sp+Fh] [bp-35h]@1
  char v19; // [sp+Fh] [bp-35h]@4
  unsigned __int8 v20; // [sp+10h] [bp-34h]@1
  int v21; // [sp+18h] [bp-2Ch]@1

  *(_DWORD *)this = -1;
  v17 = this;
  *(_DWORD *)(this + 4) = -1;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 8) = 0;
  v16 = a3;
  v21 = v6 & 8;
  v7 = (a5 & v21) != 0;
  v8 = ((a5 & v6) >> 4) & 1;
  LOBYTE(v5) = a4 != 1;
  v9 = v5 & v8 & v7;
  v18 = ((a5 >> 3) ^ 1) & v8;
  v10 = a3 == 0;
  v20 = v7 & ((a5 >> 4) ^ 1);
  if ( v20 )
  {
    v11 = *(_DWORD *)(a2 + 4);
    if ( v11 || v10 )
    {
      v19 = v9 | v18;
      goto LABEL_5;
    }
    return v17;
  }
  v11 = *(_DWORD *)(a2 + 16);
  if ( !v11 && !v10 )
    return v17;
  v19 = v9 | v18;
  if ( v19 )
  {
LABEL_5:
    v12 = *(_DWORD *)(a2 + 20);
    if ( v12 && *(_DWORD *)(a2 + 12) < v12 )
    {
      if ( !v21 )
      {
        *(_DWORD *)(a2 + 4) = v12;
        *(_DWORD *)(a2 + 8) = v12;
      }
      *(_DWORD *)(a2 + 12) = v12;
    }
    if ( a4 == 1 )
    {
      v13 = a3 + ((signed int)(v12 - v11) >> 1);
      v16 = ((*(_DWORD *)(a2 + 8) - v11) >> 1) + a3;
    }
    else
    {
      v13 = a3;
      if ( a4 == 2 )
      {
        v15 = (*(_DWORD *)(a2 + 12) - v11) >> 1;
        v16 = v15 + a3;
        v13 = v15 + a3;
      }
    }
    if ( v20 | (unsigned __int8)v9
      && SHIDWORD(v16) >= 0
      && (*(_DWORD *)(a2 + 12) - v11) >> 32 >= ((*(_DWORD *)(a2 + 12) - v11) >> 1 < (unsigned int)v16) + HIDWORD(v16) )
    {
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 4) + 2 * v16;
      *(_QWORD *)v17 = v16;
      *(_DWORD *)(v17 + 8) = 0;
    }
    if ( SHIDWORD(v13) >= 0
      && v19
      && (*(_DWORD *)(a2 + 12) - v11) >> 32 >= ((*(_DWORD *)(a2 + 12) - v11) >> 1 < (unsigned int)v13) + HIDWORD(v13) )
    {
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 16) + 2 * v13;
      *(_QWORD *)v17 = v13;
      *(_DWORD *)(v17 + 8) = 0;
    }
    return v17;
  }
  return v17;
}
