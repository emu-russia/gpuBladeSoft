int __cdecl sub_6F8361F7(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v5; // eax@4
  int v6; // eax@4
  _BYTE *v7; // eax@5
  signed int v8; // eax@7
  char v10; // [sp+10h] [bp-E8h]@5
  char v11[196]; // [sp+28h] [bp-D0h]@3
  unsigned int v12; // [sp+ECh] [bp-Ch]@3

  if ( a2 )
    *(_WORD *)(a2 + 74) |= 0x8000u;
  v12 = sub_6F839081((int)v11, 0xC4u, 0, "profile '");
  v12 = sub_6F839081((int)v11, v12 + 79, v12, (_BYTE *)a3);
  v12 = sub_6F839081((int)v11, 0xC4u, v12, "': ");
  if ( sub_6F836195(a4) )
  {
    sub_6F8360E9((int)&v11[v12], a4);
    v12 += 6;
    v5 = v12++;
    v11[v5] = 58;
    v6 = v12++;
    v11[v6] = 32;
  }
  else
  {
    v7 = sub_6F8390DC((unsigned int)&v10, (int)v11, 3u, a4);
    v12 = sub_6F839081((int)v11, 0xC4u, v12, v7);
    v12 = sub_6F839081((int)v11, 0xC4u, v12, "h: ");
  }
  v12 = sub_6F839081((int)v11, 0xC4u, v12, (_BYTE *)a5);
  if ( a2 )
    v8 = 2;
  else
    v8 = 1;
  sub_6F83987F(a1, v11, v8);
  return 0;
}
