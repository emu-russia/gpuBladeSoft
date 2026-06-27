int __usercall sub_6F8159E0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  _BYTE *v3; // esi@1
  int v4; // eax@2
  int v5; // ebx@2
  int v6; // eax@2
  bool v7; // zf@2
  bool v8; // sf@2
  unsigned __int8 v9; // of@2
  int v10; // eax@2
  int v11; // ebp@2
  char v12; // cl@2
  int result; // eax@2
  int v14; // [sp+0h] [bp-24h]@1
  int v15; // [sp+8h] [bp-1Ch]@1
  int v16; // [sp+Ch] [bp-18h]@1

  v16 = a3;
  v14 = 2 * a2;
  v3 = (_BYTE *)(-2 * a2 + a1 + 2 * a2);
  v15 = (int)(v3 + 8);
  do
  {
    v4 = *(&v3[a2] - v14);
    v5 = *(_DWORD *)(v16 + 4 * ((v3[-2 * a2] - *(&v3[3 * a2] - v14) + 3 * (*v3 - v4) + 4) >> 3));
    v6 = v5 + v4;
    v9 = __OFSUB__(v6, 255);
    v7 = v6 == 255;
    v8 = v6 - 255 < 0;
    v10 = ~v6 >> 31;
    *(&v3[a2] - v14) = v10 & (-!((unsigned __int8)(v8 ^ v9) | v7) | (*(&v3[a2] - v14) + v5));
    v11 = *v3 - v5;
    LOBYTE(v10) = v11 > 255;
    v12 = *v3 - v5;
    result = -v10;
    *(++v3 - 1) = (~v11 >> 31) & (result | v12);
  }
  while ( v3 != (_BYTE *)v15 );
  return result;
}
