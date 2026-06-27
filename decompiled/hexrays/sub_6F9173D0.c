signed int __fastcall sub_6F9173D0(int a1, int a2)
{
  signed int v2; // esi@1
  int v3; // ebx@1
  int v4; // eax@2
  int v5; // ecx@4
  unsigned int v6; // eax@7
  unsigned int v7; // esi@7
  int v9; // ST30_4@13
  unsigned __int8 v10; // [sp+2Bh] [bp-B5h]@5
  int v11; // [sp+40h] [bp-A0h]@7
  char v12; // [sp+44h] [bp-9Ch]@7
  char v13; // [sp+C4h] [bp-1Ch]@7

  v2 = 1;
  v3 = a1;
  if ( *(_DWORD *)(a1 + 16) < *(_DWORD *)(a1 + 20) )
  {
    v4 = (*(int (__fastcall **)(int, int, signed int))(*(_DWORD *)a1 + 52))(a1, a2, 0xFFFF);
    LOBYTE(v4) = (_WORD)v4 != -1;
    v2 = v4;
  }
  if ( *(_BYTE *)(v3 + 70) )
  {
    v5 = *(_DWORD *)(v3 + 88);
    if ( !v5 )
      sub_6F95AA30();
    v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 24))(v5, a2);
    if ( !v10 )
    {
      if ( (_BYTE)v2 )
      {
        while ( 1 )
        {
          v6 = (*(int (__stdcall **)(int, char *, char *, int *))(**(_DWORD **)(v3 + 88) + 12))(
                 v3 + 52,
                 &v12,
                 &v13,
                 &v11);
          v7 = v6;
          if ( v6 == 2 )
            break;
          if ( v6 <= 1 && v11 - (signed int)&v12 > 0 )
          {
            v9 = v11 - (_DWORD)&v12;
            if ( v9 != sub_6F90E570((FILE **)(v3 + 36), (int)&v12, v11 - (_DWORD)&v12) )
              break;
            if ( v7 == 1 )
              continue;
          }
          v10 = (unsigned __int16)(*(int (__thiscall **)(int, signed int))(*(_DWORD *)v3 + 52))(v3, 0xFFFF) != -1;
          break;
        }
        v2 = v10;
      }
    }
  }
  return v2;
}
