signed int __thiscall sub_6F915190(_DWORD *this)
{
  signed int v1; // esi@1
  _DWORD *v2; // ebx@1
  int v3; // eax@2
  int v4; // ecx@4
  unsigned int v5; // eax@7
  unsigned int v6; // esi@7
  int v8; // ST30_4@13
  unsigned __int8 v9; // [sp+2Bh] [bp-B5h]@5
  int v10; // [sp+40h] [bp-A0h]@7
  char v11; // [sp+44h] [bp-9Ch]@7
  char v12; // [sp+C4h] [bp-1Ch]@7

  v1 = 1;
  v2 = this;
  if ( this[4] < this[5] )
  {
    v3 = (*(int (__stdcall **)(signed int))(*this + 52))(-1);
    LOBYTE(v3) = v3 != -1;
    v1 = v3;
  }
  if ( *((_BYTE *)v2 + 70) )
  {
    v4 = v2[21];
    if ( !v4 )
      sub_6F95AA30();
    v9 = (*(int (**)(void))(*(_DWORD *)v4 + 24))();
    if ( !v9 )
    {
      if ( (_BYTE)v1 )
      {
        while ( 1 )
        {
          v5 = (*(int (__stdcall **)(int, char *, char *, int *))(*(_DWORD *)v2[21] + 12))(
                 (int)(v2 + 13),
                 &v11,
                 &v12,
                 &v10);
          v6 = v5;
          if ( v5 == 2 )
            break;
          if ( v5 <= 1 && v10 - (signed int)&v11 > 0 )
          {
            v8 = v10 - (_DWORD)&v11;
            if ( v8 != sub_6F90E570((FILE **)v2 + 9, (int)&v11, v10 - (_DWORD)&v11) )
              break;
            if ( v6 == 1 )
              continue;
          }
          v9 = (*(int (__thiscall **)(_DWORD *, signed int))(*v2 + 52))(v2, -1) != -1;
          break;
        }
        v1 = v9;
      }
    }
  }
  return v1;
}
