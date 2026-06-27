int __usercall sub_6F69C050@<eax>(int a1@<eax>, int *a2@<edx>)
{
  int v2; // ebx@1
  const char *v3; // ebp@1
  unsigned int v4; // eax@5
  size_t v6; // [sp+Ch] [bp-1E0h]@7
  int (**v7)(); // [sp+10h] [bp-1DCh]@3
  int (**v8)(); // [sp+14h] [bp-1D8h]@3
  int v9; // [sp+18h] [bp-1D4h]@3
  int v10; // [sp+1Ch] [bp-1D0h]@3
  unsigned int v11; // [sp+20h] [bp-1CCh]@3
  const void *v12; // [sp+24h] [bp-1C8h]@3
  unsigned int v13; // [sp+28h] [bp-1C4h]@3
  int v14; // [sp+2Ch] [bp-1C0h]@3
  volatile signed __int32 *v15; // [sp+30h] [bp-1BCh]@3
  int v16; // [sp+34h] [bp-1B8h]@3
  char *v17; // [sp+38h] [bp-1B4h]@3
  int v18; // [sp+3Ch] [bp-1B0h]@3
  char v19; // [sp+40h] [bp-1ACh]@3
  int (**v20)(); // [sp+50h] [bp-19Ch]@3
  int v21; // [sp+C0h] [bp-12Ch]@3
  __int16 v22; // [sp+C4h] [bp-128h]@3
  int v23; // [sp+C8h] [bp-124h]@3
  int v24; // [sp+CCh] [bp-120h]@3
  int v25; // [sp+D0h] [bp-11Ch]@3
  int v26; // [sp+D4h] [bp-118h]@3
  int (**v27)(); // [sp+D8h] [bp-114h]@1
  int v28; // [sp+DCh] [bp-110h]@1
  int (**v29)(); // [sp+E0h] [bp-10Ch]@1
  char v30; // [sp+FCh] [bp-F0h]@11
  char v31; // [sp+104h] [bp-E8h]@3
  int (**v32)(); // [sp+148h] [bp-A4h]@1
  int v33; // [sp+1B8h] [bp-34h]@1
  __int16 v34; // [sp+1BCh] [bp-30h]@1
  int v35; // [sp+1C0h] [bp-2Ch]@1
  int v36; // [sp+1C4h] [bp-28h]@1
  int v37; // [sp+1C8h] [bp-24h]@1
  int v38; // [sp+1CCh] [bp-20h]@1

  v2 = a1;
  v3 = (const char *)*a2;
  sub_6F956880((int)&v32);
  v32 = off_6FBB0FC0;
  v34 = 0;
  v27 = (int (**)())dword_6FBABDC8;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  *(int (***)())((char *)&v27 + dword_6FBABDC8[-3]) = (int (**)())&unk_6FBABDDC;
  v28 = 0;
  sub_6F958050((int (*)())((char *)*(v27 - 3) + (_DWORD)&v27), 0);
  v27 = off_6FBB04F8;
  v32 = off_6FBB050C;
  sub_6F916BF0(&v29);
  sub_6F958050(&v32, (int)&v29);
  if ( sub_6F915490((int)&v29, v3, 8) )
    sub_6F9581E0((int)*(v27 - 3) + (_DWORD)&v27, 0);
  else
    sub_6F9581E0((int)*(v27 - 3) + (_DWORD)&v27, *(_DWORD *)((char *)*(v27 - 3) + (_DWORD)&v27 + 20) | 4);
  sub_6F956880((int)&v20);
  v20 = off_6FBB0FC0;
  v22 = 0;
  v7 = (int (**)())dword_6FBABC10;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  *(int (***)())((char *)&v7 + dword_6FBABC10[-3]) = (int (**)())&unk_6FBABC24;
  sub_6F958050((int (*)())((char *)*(v7 - 3) + (_DWORD)&v7), 0);
  v7 = off_6FBAFF14;
  v20 = off_6FBAFF28;
  v8 = off_6FBB0674;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  sub_6F938250(&v15);
  v8 = off_6FBAFC20;
  v17 = &v19;
  v16 = 16;
  v18 = 0;
  v19 = 0;
  sub_6F958050(&v20, (int)&v8);
  if ( sub_6F8BF810(&v31) )
    sub_6F907E20((char *)&v7, (int)&v29);
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)v2 = v2 + 8;
  v4 = v13;
  *(_BYTE *)(v2 + 8) = 0;
  if ( v4 )
  {
    if ( v4 > v11 )
      v6 = v4 - (_DWORD)v12;
    else
      v6 = v11 - (_DWORD)v12;
    sub_6F93A0E0(v2, 0, 0, v12, v6);
  }
  else
  {
    sub_6F93C180(v2, (int)&v17);
  }
  v7 = off_6FBAFF14;
  v20 = off_6FBAFF28;
  v8 = off_6FBAFC20;
  if ( v17 != &v19 )
    j_free_1(v17);
  v8 = off_6FBB0674;
  sub_6F938380(&v15);
  v7 = (int (**)())dword_6FBABC10;
  *(int (***)())((char *)&v7 + dword_6FBABC10[-3]) = (int (**)())&unk_6FBABC24;
  v20 = off_6FBB0FC0;
  sub_6F956920(&v20);
  v27 = off_6FBB04F8;
  v32 = off_6FBB050C;
  v29 = off_6FBB0398;
  sub_6F915820(&v29);
  sub_6F90E8A0((int)&v31);
  v29 = off_6FBB0674;
  sub_6F938380((volatile signed __int32 **)&v30);
  v27 = (int (**)())dword_6FBABDC8;
  *(int (***)())((char *)&v27 + dword_6FBABDC8[-3]) = (int (**)())&unk_6FBABDDC;
  v28 = 0;
  v32 = off_6FBB0FC0;
  sub_6F956920(&v32);
  return v2;
}
