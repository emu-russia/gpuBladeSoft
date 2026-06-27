void __usercall sub_6F755500(int a1@<ebp>)
{
  double v1; // st6@13
  int v2; // esi@13
  int v3; // ebp@13
  unsigned int v4; // eax@16
  int v5; // eax@16
  int v6; // edx@17
  unsigned int v7; // ebp@17
  signed int v8; // eax@27
  signed int v9; // eax@31
  size_t v10; // esi@35
  char *v11; // ebp@42
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
  sub_6F695280(&v25, "/videos/video1_");
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
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  dword_70258D1C = dword_6FD400C4;
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v1 = 60.0;
  v2 = dword_6FD400C8;
  v3 = dword_70258D1C;
  dword_70258D18 = dword_6FD400C8;
  if ( (unk_6FBB979E >> 4) & 1 )
    v1 = 50.0;
  dword_70258D14 = (unk_6FBB979E >> 4) & 1;
  dword_6FB489E4 = (signed int)(v1 * flt_6FBB9540);
  sub_6F695280(&v27, v15);
  dword_70258B80 = (int)fopen(v27, "wb");
  if ( !dword_70258B80 || (v4 = time(0), srand(v4), v5 = rand(), sub_6F82F8E0((int)&unk_70258BA0, v5)) )
  {
    nullsub_10();
    if ( v27 != &v28 )
      j_free_1(v27);
    goto LABEL_38;
  }
  sub_6F800CF0((int)&unk_70258B40);
  dword_70258B4C = v3;
  dword_70258B50 = v2;
  dword_70258B44 = (v3 + 15) & 0xFFFFFFF0;
  v6 = 0;
  dword_70258B48 = (v2 + 15) & 0xFFFFFFF0;
  v7 = dword_6FB489E0 - 1;
  dword_70258B54 = 0;
  dword_70258B58 = 0;
  dword_70258B5C = dword_6FB489E4;
  dword_70258B60 = 1;
  dword_70258B64 = 1;
  dword_70258B68 = 1;
  dword_70258B6C = 0;
  dword_70258B70 = 0;
  dword_70258B74 = 0;
  dword_70258B78 = (signed int)((double)dword_6FBB953C * 6.3);
  if ( dword_6FB489E0 != 1 )
  {
    do
    {
      ++v6;
      v7 >>= 1;
    }
    while ( v7 );
  }
  dword_70258B7C = v6;
  dword_70258D08 = (int)sub_6F805CC0((int)&unk_70258B40);
  sub_6F800D30((int)&unk_70258B40);
  if ( sub_6F8069F0(dword_70258D08, 4, &dword_6FB489E0, 4) < 0 )
    nullsub_10();
  v23 = 0;
  if ( sub_6F8069F0(dword_70258D08, 12, (int *)&v23, 4) < 0 )
  {
    v13 = (FILE *)off_6FB48ABC(2);
    fwrite("Warning: could not determine maximum speed level.\n", 1u, 0x32u, v13);
    if ( (signed int)v23 <= 0 )
      goto LABEL_23;
LABEL_41:
    if ( sub_6F8069F0(dword_70258D08, 14, (int *)&v23, 4) < 0 )
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
  if ( sub_6F8074C0(dword_70258D08, (int)&v25, (int)&unk_70258B20) <= 0 )
  {
LABEL_48:
    nullsub_10();
    exit(1);
  }
  sub_6F8012A0((int)&v25);
  sub_6F82FF10((int)&unk_70258BA0, (int)&unk_70258B20);
  if ( sub_6F830C00((int)&unk_70258BA0, (int)&dword_70258B84) != 1 )
  {
LABEL_50:
    nullsub_10();
    exit(1);
  }
  fwrite((const void *)dword_70258B84, 1u, dword_70258B88, (FILE *)dword_70258B80);
  fwrite((const void *)dword_70258B8C, 1u, dword_70258B90, (FILE *)dword_70258B80);
  while ( 1 )
  {
    v8 = sub_6F8074C0(dword_70258D08, (int)&v25, (int)&unk_70258B20);
    if ( v8 < 0 )
      goto LABEL_48;
    if ( !v8 )
      break;
    sub_6F82FF10((int)&unk_70258BA0, (int)&unk_70258B20);
  }
  while ( 1 )
  {
    v9 = sub_6F8301E0((int)&unk_70258BA0, (int)&dword_70258B84);
    if ( v9 < 0 )
      goto LABEL_50;
    if ( !v9 )
      break;
    fwrite((const void *)dword_70258B84, 1u, dword_70258B88, (FILE *)dword_70258B80);
    fwrite((const void *)dword_70258B8C, 1u, dword_70258B90, (FILE *)dword_70258B80);
  }
  if ( v27 != &v28 )
    j_free_1(v27);
  v10 = 3 * dword_70258D18 * dword_70258D1C;
  dword_70258D0C = (int)malloc(3 * dword_70258D18 * dword_70258D1C);
  if ( !dword_70258D0C || (dword_70258D10 = (int)malloc(v10)) == 0 )
  {
    nullsub_10();
    exit(1);
  }
  dword_6FD400E0 = 1;
  sub_6F72F480("Video1 recording started (%s)", v15);
LABEL_38:
  if ( v15 != &v16 )
    j_free_1((void *)v15);
}
