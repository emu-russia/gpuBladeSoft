signed int __cdecl sub_6F75C4C0(int a1)
{
  int v1; // esi@2
  int *v2; // ebx@4
  unsigned int v3; // edi@4
  int v4; // ecx@5
  int v5; // eax@5
  int *v6; // ST08_4@5
  int v7; // ST00_4@5
  signed int result; // eax@7
  int v9; // [sp+28h] [bp-34h]@1
  int v10; // [sp+2Ch] [bp-30h]@1
  int v11; // [sp+30h] [bp-2Ch]@1
  int v12; // [sp+34h] [bp-28h]@1
  int v13; // [sp+38h] [bp-24h]@1
  int v14; // [sp+3Ch] [bp-20h]@1
  int v15; // [sp+40h] [bp-1Ch]@1
  int v16; // [sp+44h] [bp-18h]@1
  int v17; // [sp+48h] [bp-14h]@1
  unsigned int v18; // [sp+4Ch] [bp-10h]@1

  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  sub_6F8B73E0(a1, "%02x", &v18);
  if ( !v18 )
    goto LABEL_11;
  v1 = a1 + 2;
  if ( v18 > 3 )
    v18 = 3;
  v2 = &v11;
  v3 = 0;
  do
  {
    v4 = (int)(v2 - 2);
    v5 = (int)(v2 - 1);
    v6 = v2;
    ++v3;
    v7 = v1;
    v2 += 3;
    v1 += 8;
    sub_6F8B73E0(v7, "%02x%02x%04x", v6, v5, v4);
  }
  while ( v18 > v3 );
  if ( v18 )
    result = sub_6F75AAA0((int)&v9);
  else
LABEL_11:
    result = 0;
  return result;
}
