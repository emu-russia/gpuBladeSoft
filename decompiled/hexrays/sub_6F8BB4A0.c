int __thiscall sub_6F8BB4A0(void *this, int a2, char *a3, int a4)
{
  void *v4; // ebp@1
  int v5; // eax@1
  int v6; // edx@1
  int i; // ebx@4
  signed int v8; // esi@10
  char *v9; // eax@11
  signed int v10; // eax@12
  int v11; // eax@22
  int v12; // ecx@23
  signed int v13; // eax@23
  int v14; // ecx@23
  int result; // eax@26
  unsigned __int8 v16; // ST14_1@29
  bool v17; // al@29
  int v18; // [sp+18h] [bp-34h]@2
  int v19; // [sp+20h] [bp-2Ch]@5
  int v20; // [sp+24h] [bp-28h]@7
  int v21; // [sp+28h] [bp-24h]@10
  int v22; // [sp+2Ch] [bp-20h]@10

  v4 = this;
  LOBYTE(v5) = sub_6F8BB190(this, a2, (int)a3, a4);
  v6 = v5;
  if ( (_BYTE)v5 )
    return v6;
  v18 = *(_DWORD *)(a4 + 8);
  if ( v18 & 0x10 )
    v18 = *((_DWORD *)v4 + 2);
  for ( i = *((_DWORD *)v4 + 3); ; --i )
  {
    if ( !i )
    {
      LOBYTE(v6) = *(_DWORD *)(a4 + 4) != 0;
      return v6;
    }
    v8 = *((_DWORD *)v4 + 2 * i + 3);
    v19 = 0;
    v20 = 0;
    v21 = v18;
    v6 = v8 & 1;
    v22 = 0;
    if ( v8 & 2 | v18 & 1 )
    {
      v9 = 0;
      if ( a3 )
      {
        v10 = v8 >> 8;
        if ( v8 & 1 )
          v10 = *(_DWORD *)(*(_DWORD *)a3 + v10);
        v9 = &a3[v10];
      }
      v6 = (*(int (__stdcall **)(int, char *, int *))(**((_DWORD **)v4 + 2 * i + 2) + 24))(a2, v9, &v19);
      if ( (_BYTE)v6 )
        break;
    }
LABEL_8:
    ;
  }
  if ( v22 == 8 && v8 & 1 )
    v22 = *((_DWORD *)v4 + 2 * i + 2);
  if ( v20 > 3 && !(v8 & 2) )
    v20 &= 0xFFFFFFFD;
  v11 = *(_DWORD *)(a4 + 12);
  if ( !v11 )
  {
    v12 = v21;
    *(_DWORD *)a4 = v19;
    v13 = v20;
    *(_DWORD *)(a4 + 8) = v12;
    v14 = v22;
    *(_DWORD *)(a4 + 4) = v13;
    *(_DWORD *)(a4 + 12) = v14;
    if ( v13 <= 3 )
      return v6;
    if ( v13 & 2 )
    {
      if ( !(*((_BYTE *)v4 + 8) & 1) )
        return v6;
    }
    else if ( !(v13 & 1) || !(*((_BYTE *)v4 + 8) & 2) )
    {
      return v6;
    }
    goto LABEL_8;
  }
  if ( *(_DWORD *)a4 != v19 )
  {
    *(_DWORD *)a4 = 0;
    result = v6;
    *(_DWORD *)(a4 + 4) = 2;
    return result;
  }
  if ( *(_DWORD *)a4 )
  {
    *(_DWORD *)(a4 + 4) |= v20;
    goto LABEL_8;
  }
  if ( v11 != 8 && v22 != 8 )
  {
    v16 = v6;
    v17 = sub_6F8FD070(v22, *(_DWORD *)(a4 + 12));
    v6 = v16;
    if ( v17 )
    {
      *(_DWORD *)(a4 + 4) |= v20;
      goto LABEL_8;
    }
  }
  *(_DWORD *)(a4 + 4) = 2;
  return v6;
}
