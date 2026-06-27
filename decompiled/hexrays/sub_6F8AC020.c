void __usercall sub_6F8AC020(int a1@<eax>, _TBYTE a2)
{
  int v2; // ebx@1
  int v3; // eax@1
  char *v4; // eax@3
  int v5; // esi@3
  int v6; // eax@6
  int v7; // [sp+28h] [bp-24h]@3
  int v8; // [sp+2Ch] [bp-20h]@3
  _TBYTE v9; // [sp+30h] [bp-1Ch]@3
  int v10; // [sp+3Ch] [bp-10h]@3

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 < 0 )
  {
    *(_DWORD *)(v2 + 12) = 6;
    v3 = 6;
  }
  *(double *)&v9 = *(double *)&a2;
  v4 = (char *)sub_6F8AB750(3, *(double *)&a2, *((int *)&v9 + 2), v10, v3, (int)&v8, &v7);
  v5 = (int)v4;
  if ( v8 == -32768 )
  {
    sub_6F8ABAF0(v7, (int)v4, v2);
    sub_6F8ADCE0(v5);
  }
  else
  {
    sub_6F8ABC80(v7, v4, v8, v2);
    while ( 1 )
    {
      v6 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 8) = v6 - 1;
      if ( v6 <= 0 )
        break;
      sub_6F8AB850(32, v2);
    }
    sub_6F8ADCE0(v5);
  }
}
