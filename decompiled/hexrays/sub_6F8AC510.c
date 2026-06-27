void __usercall sub_6F8AC510(int a1@<eax>, _TBYTE a2)
{
  int v2; // ebx@1
  int v3; // eax@1
  int v4; // eax@2
  char *v5; // eax@3
  int v6; // esi@3
  int v7; // [sp+28h] [bp-24h]@3
  int v8; // [sp+2Ch] [bp-20h]@3
  _TBYTE v9; // [sp+30h] [bp-1Ch]@3
  int v10; // [sp+3Ch] [bp-10h]@3

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 < 0 )
  {
    *(_DWORD *)(v2 + 12) = 6;
    v4 = 7;
  }
  else
  {
    v4 = v3 + 1;
  }
  *(double *)&v9 = *(double *)&a2;
  v5 = (char *)sub_6F8AB750(2, *(double *)&a2, *((int *)&v9 + 2), v10, v4, (int)&v8, &v7);
  v6 = (int)v5;
  if ( v8 == -32768 )
  {
    sub_6F8ABAF0(v7, (int)v5, v2);
    sub_6F8ADCE0(v6);
  }
  else
  {
    sub_6F8AC430(v7, v5, v8, v2);
    sub_6F8ADCE0(v6);
  }
}
