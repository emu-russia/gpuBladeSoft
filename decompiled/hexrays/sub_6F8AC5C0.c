void __usercall sub_6F8AC5C0(int a1@<eax>, _TBYTE a2)
{
  int v2; // ebx@1
  int v3; // eax@1
  int v4; // eax@4
  int v5; // esi@4
  const char *v6; // edi@4
  int v7; // eax@5
  int v8; // edx@6
  int v9; // eax@11
  int v10; // eax@14
  signed int v11; // eax@19
  int v12; // edx@20
  int v13; // [sp+28h] [bp-24h]@4
  int v14; // [sp+2Ch] [bp-20h]@4
  _TBYTE v15; // [sp+30h] [bp-1Ch]@4
  int v16; // [sp+3Ch] [bp-10h]@4

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 < 0 )
  {
    *(_DWORD *)(v2 + 12) = 6;
    v3 = 6;
  }
  else if ( !v3 )
  {
    *(_DWORD *)(v2 + 12) = 1;
    v3 = 1;
  }
  *(double *)&v15 = *(double *)&a2;
  v4 = sub_6F8AB750(2, *(double *)&a2, *((int *)&v15 + 2), v16, v3, (int)&v14, &v13);
  v5 = v14;
  v6 = (const char *)v4;
  if ( v14 == -32768 )
  {
    sub_6F8ABAF0(v13, v4, v2);
    sub_6F8ADCE0((int)v6);
  }
  else
  {
    v7 = *(_DWORD *)(v2 + 4) & 0x800;
    if ( v14 < -3 || (v8 = *(_DWORD *)(v2 + 12), v14 > v8) )
    {
      if ( v7 )
        v10 = *(_DWORD *)(v2 + 12) - 1;
      else
        v10 = strlen(v6) - 1;
      *(_DWORD *)(v2 + 12) = v10;
      sub_6F8AC430(v13, (char *)v6, v5, v2);
      sub_6F8ADCE0((int)v6);
    }
    else
    {
      if ( v7 )
      {
        *(_DWORD *)(v2 + 12) = v8 - v14;
      }
      else
      {
        v11 = strlen(v6) - v5;
        *(_DWORD *)(v2 + 12) = v11;
        if ( v11 < 0 )
        {
          v12 = *(_DWORD *)(v2 + 8);
          if ( v12 > 0 )
            *(_DWORD *)(v2 + 8) = v12 + v11;
        }
      }
      sub_6F8ABC80(v13, (char *)v6, v5, v2);
      while ( 1 )
      {
        v9 = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 8) = v9 - 1;
        if ( v9 <= 0 )
          break;
        sub_6F8AB850(32, v2);
      }
      sub_6F8ADCE0((int)v6);
    }
  }
}
