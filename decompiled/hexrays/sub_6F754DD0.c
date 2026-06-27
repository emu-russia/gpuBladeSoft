void __usercall sub_6F754DD0(int a1@<ebp>)
{
  double v1; // st6@13
  int v2; // edi@13
  int v3; // esi@13
  unsigned int v4; // eax@16
  int v5; // eax@16
  int v6; // eax@17
  unsigned int v7; // esi@17
  signed int v8; // eax@27
  signed int v9; // eax@31
  size_t v10; // edi@35
  char *v11; // esi@42
  FILE *v12; // eax@42
  FILE *v13; // eax@45
  char v14; // [sp+20h] [bp-1CCh]@1
  const char *v15; // [sp+28h] [bp-1C4h]@1
  char v16; // [sp+30h] [bp-1BCh]@38
  char *v17; // [sp+40h] [bp-1ACh]@1
  char v18; // [sp+48h] [bp-1A4h]@11
  char *v19; // [sp+58h] [bp-194h]@1
  char v20; // [sp+60h] [bp-18Ch]@1
  char *v21; // [sp+70h] [bp-17Ch]@1
  char v22; // [sp+78h] [bp-174h]@9
  char *v23; // [sp+88h] [bp-164h]@1
  char v24; // [sp+90h] [bp-15Ch]@3
  char *v25; // [sp+A0h] [bp-14Ch]@1
  char v26; // [sp+A8h] [bp-144h]@7
  char *v27; // [sp+B8h] [bp-134h]@1
  char v28; // [sp+C0h] [bp-12Ch]@5
  char v29; // [sp+D0h] [bp-11Ch]@1

  sub_6F8B5DB0(a1, 0, (int)&v14);
  sub_6F760580((int)&v14, &v29, 0xFFu);
  sub_6F695280(&v17, ".ogv");
  sub_6F695280(&v21, &v29);
  sub_6F695280(&v25, "/videos/video2_");
  sub_6F695280(&v27, *(const char **)(dword_6FBB51E8 + 8));
  sub_6F7544E0((int)&v23, (int)&v27, (int)&v25);
  sub_6F7544E0((int)&v19, (int)&v23, (int)&v21);
  sub_6F7544E0((int)&v15, (int)&v19, (int)&v17);
  if ( v19 != &v20 )
    j_free_1(v19);
  if ( v23 != &v24 )
    j_free_1(v23);
  if ( v27 != &v28 )
    j_free_1(v27);
  if ( v25 != &v26 )
    j_free_1(v25);
  if ( v21 != &v22 )
    j_free_1(v21);
  if ( v17 != &v18 )
    j_free_1(v17);
  v1 = 60.0;
  v2 = dword_6FD40980;
  v3 = dword_6FD4097C;
  if ( (unk_6FBB979E >> 4) & 1 )
    v1 = 50.0;
  dword_6FBB5074 = (unk_6FBB979E >> 4) & 1;
  dword_6FBB506C = dword_6FD40980;
  dword_6FB489EC = (signed int)(v1 * flt_6FBB9540);
  dword_6FBB5070 = dword_6FD4097C;
  sub_6F695280(&v27, v15);
  dword_70258D80 = (int)fopen(v27, "wb");
  if ( !dword_70258D80 || (v4 = time(0), srand(v4), v5 = rand(), sub_6F82F8E0((int)&unk_70258DA0, v5)) )
  {
    nullsub_10();
    if ( v27 != &v28 )
      j_free_1(v27);
    goto LABEL_38;
  }
  sub_6F800CF0((int)&unk_70258D40);
  dword_70258D50 = v3;
  dword_70258D4C = v2;
  dword_70258D44 = (v2 + 15) & 0xFFFFFFF0;
  v6 = 0;
  dword_70258D48 = (v3 + 15) & 0xFFFFFFF0;
  v7 = dword_6FB489E8 - 1;
  dword_70258D54 = 0;
  dword_70258D58 = 0;
  dword_70258D5C = dword_6FB489EC;
  dword_70258D60 = 1;
  dword_70258D64 = 1;
  dword_70258D68 = 1;
  dword_70258D6C = 0;
  dword_70258D70 = 0;
  dword_70258D74 = 0;
  dword_70258D78 = (signed int)((double)dword_6FBB953C * 6.3);
  if ( dword_6FB489E8 != 1 )
  {
    do
    {
      ++v6;
      v7 >>= 1;
    }
    while ( v7 );
  }
  dword_70258D7C = v6;
  dword_70258F08 = (int)sub_6F805CC0((int)&unk_70258D40);
  sub_6F800D30((int)&unk_70258D40);
  if ( sub_6F8069F0(dword_70258F08, 4, &dword_6FB489E8, 4) < 0 )
    nullsub_10();
  v23 = 0;
  if ( sub_6F8069F0(dword_70258F08, 12, (int *)&v23, 4) < 0 )
  {
    v13 = (FILE *)off_6FB48ABC(2);
    fwrite("Warning: could not determine maximum speed level.\n", 1u, 0x32u, v13);
    if ( (signed int)v23 <= 0 )
      goto LABEL_23;
LABEL_41:
    if ( sub_6F8069F0(dword_70258F08, 14, (int *)&v23, 4) < 0 )
    {
      v11 = v23;
      v12 = (FILE *)off_6FB48ABC(2);
      fprintf(v12, "Warning: could not set speed level to %i\n", v11);
    }
    goto LABEL_23;
  }
  if ( (signed int)v23 > 0 )
    goto LABEL_41;
LABEL_23:
  sub_6F800D60((int)&v25);
  if ( sub_6F8074C0(dword_70258F08, (int)&v25, (int)&unk_70258D20) <= 0 )
  {
LABEL_48:
    nullsub_10();
    exit(1);
  }
  sub_6F8012A0((int)&v25);
  sub_6F82FF10((int)&unk_70258DA0, (int)&unk_70258D20);
  if ( sub_6F830C00((int)&unk_70258DA0, (int)&dword_70258D84) != 1 )
  {
LABEL_50:
    nullsub_10();
    exit(1);
  }
  fwrite((const void *)dword_70258D84, 1u, dword_70258D88, (FILE *)dword_70258D80);
  fwrite((const void *)dword_70258D8C, 1u, dword_70258D90, (FILE *)dword_70258D80);
  while ( 1 )
  {
    v8 = sub_6F8074C0(dword_70258F08, (int)&v25, (int)&unk_70258D20);
    if ( v8 < 0 )
      goto LABEL_48;
    if ( !v8 )
      break;
    sub_6F82FF10((int)&unk_70258DA0, (int)&unk_70258D20);
  }
  while ( 1 )
  {
    v9 = sub_6F8301E0((int)&unk_70258DA0, (int)&dword_70258D84);
    if ( v9 < 0 )
      goto LABEL_50;
    if ( !v9 )
      break;
    fwrite((const void *)dword_70258D84, 1u, dword_70258D88, (FILE *)dword_70258D80);
    fwrite((const void *)dword_70258D8C, 1u, dword_70258D90, (FILE *)dword_70258D80);
  }
  if ( v27 != &v28 )
    j_free_1(v27);
  v10 = 3 * dword_6FBB5070 * dword_6FBB506C;
  dword_6FBB5060 = (int)malloc(3 * dword_6FBB5070 * dword_6FBB506C);
  if ( !dword_6FBB5060 || (dword_6FBB5064 = (int)malloc(v10)) == 0 )
  {
    nullsub_10();
    exit(1);
  }
  dword_6FBB5078 = 1;
  sub_6F72F480("Video2 recording started (%s)", v15);
LABEL_38:
  if ( v15 != &v16 )
    j_free_1((void *)v15);
}
