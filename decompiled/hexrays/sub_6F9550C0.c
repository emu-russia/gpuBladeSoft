int sub_6F9550C0()
{
  int result; // eax@2
  int v1; // eax@3
  int v2; // eax@3
  int v3; // eax@3
  int v4; // eax@3
  int v5; // eax@3
  int (__cdecl *v6)(signed int); // eax@3
  int v7; // [sp+0h] [bp-58h]@1
  int v8; // [sp+14h] [bp-44h]@3
  int (__cdecl *v9)(signed int); // [sp+18h] [bp-40h]@3
  char v10; // [sp+1Ch] [bp-3Ch]@1
  int v11; // [sp+20h] [bp-38h]@3
  int (__cdecl *v12)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-24h]@1
  int *v13; // [sp+38h] [bp-20h]@1
  char *v14; // [sp+3Ch] [bp-1Ch]@1
  int (*v15)(); // [sp+40h] [bp-18h]@1
  int *v16; // [sp+44h] [bp-14h]@1
  char v17; // [sp+50h] [bp-8h]@1

  v12 = sub_6F962A50;
  v14 = &v17;
  v13 = dword_6F96AA4C;
  v15 = sub_6F955830;
  v16 = &v7;
  sub_6F8A1A60((int *)&v10);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&dword_6FB49FC8, 1u) )
  {
    result = sub_6F8A1AD0((int *)&v10);
  }
  else
  {
    byte_6FB49FCC = 1;
    v9 = off_6FB48ABC;
    v11 = -1;
    v1 = off_6FB48ABC(1);
    dword_6FB499C0 = (int)off_6FBB0674;
    v8 = v1;
    dword_6FB499C4 = 0;
    dword_6FB499C8 = 0;
    dword_6FB499CC = 0;
    dword_6FB499D0 = 0;
    dword_6FB499D4 = 0;
    dword_6FB499D8 = 0;
    sub_6F938250(&unk_6FB499DC);
    dword_6FB499C0 = (int)off_6FBAF584;
    dword_6FB499E0 = v8;
    dword_6FB499E4 = -1;
    v2 = v9(0);
    dword_6FB49940 = (int)off_6FBB0674;
    v8 = v2;
    dword_6FB49944 = 0;
    dword_6FB49948 = 0;
    dword_6FB4994C = 0;
    dword_6FB49950 = 0;
    dword_6FB49954 = 0;
    dword_6FB49958 = 0;
    sub_6F938250(&unk_6FB4995C);
    dword_6FB49940 = (int)off_6FBAF584;
    dword_6FB49960 = v8;
    dword_6FB49964 = -1;
    v3 = v9(2);
    dword_6FB49980 = (int)off_6FBB0674;
    v8 = v3;
    dword_6FB49984 = 0;
    dword_6FB49988 = 0;
    dword_6FB4998C = 0;
    dword_6FB49990 = 0;
    dword_6FB49994 = 0;
    dword_6FB49998 = 0;
    sub_6F938250(&unk_6FB4999C);
    dword_6FB49980 = (int)off_6FBAF584;
    dword_6FB499A4 = -1;
    dword_6FB499A0 = v8;
    sub_6F956880((int)&dword_6FB4A1E4);
    word_6FB4A258 = 0;
    dword_6FB4A254 = 0;
    dword_6FB4A25C = 0;
    dword_6FB4A260 = 0;
    dword_6FB4A264 = 0;
    dword_6FB4A268 = 0;
    dword_6FB4A1E0 = (int)off_6FBB0160;
    dword_6FB4A1E4 = (int)off_6FBB0174;
    v11 = 8;
    sub_6F958050(&dword_6FB4A1E4, (int)&dword_6FB499C0);
    sub_6F956880((int)&dword_6FB4A008);
    dword_6FB4A078 = 0;
    word_6FB4A07C = 0;
    dword_6FB4A080 = 0;
    dword_6FB4A084 = 0;
    dword_6FB4A088 = 0;
    dword_6FB4A08C = 0;
    dword_6FB4A000 = (int)off_6FBB0138;
    dword_6FB4A008 = (int)off_6FBB014C;
    dword_6FB4A004 = 0;
    v11 = 7;
    sub_6F958050(&dword_6FB4A008, (int)&dword_6FB49940);
    sub_6F956880((int)&dword_6FB4A0A4);
    dword_6FB4A114 = 0;
    word_6FB4A118 = 0;
    dword_6FB4A11C = 0;
    dword_6FB4A120 = 0;
    dword_6FB4A124 = 0;
    dword_6FB4A128 = 0;
    dword_6FB4A0A0 = (int)off_6FBB0160;
    dword_6FB4A0A4 = (int)off_6FBB0174;
    v11 = 6;
    sub_6F958050(&dword_6FB4A0A4, (int)&dword_6FB49980);
    sub_6F956880((int)&dword_6FB4A144);
    dword_6FB4A1B4 = 0;
    word_6FB4A1B8 = 0;
    dword_6FB4A1BC = 0;
    dword_6FB4A1C0 = 0;
    dword_6FB4A1C4 = 0;
    dword_6FB4A1C8 = 0;
    dword_6FB4A140 = (int)off_6FBB0160;
    dword_6FB4A144 = (int)off_6FBB0174;
    v11 = 5;
    sub_6F958050(&dword_6FB4A144, (int)&dword_6FB49980);
    dword_6FB4A078 = (int)&dword_6FB4A1E0;
    dword_6FB4A0B0 |= 0x2000u;
    dword_6FB4A114 = (int)&dword_6FB4A1E0;
    v11 = -1;
    v4 = v9(1);
    dword_6FB49A80 = (int)off_6FBB06B4;
    v8 = v4;
    dword_6FB49A84 = 0;
    dword_6FB49A88 = 0;
    dword_6FB49A8C = 0;
    dword_6FB49A90 = 0;
    dword_6FB49A94 = 0;
    dword_6FB49A98 = 0;
    sub_6F938250(&unk_6FB49A9C);
    word_6FB49AA4 = -1;
    dword_6FB49AA0 = v8;
    dword_6FB49A80 = (int)off_6FBAF5C4;
    v5 = v9(0);
    dword_6FB49A00 = (int)off_6FBB06B4;
    v8 = v5;
    dword_6FB49A04 = 0;
    dword_6FB49A08 = 0;
    dword_6FB49A0C = 0;
    dword_6FB49A10 = 0;
    dword_6FB49A14 = 0;
    dword_6FB49A18 = 0;
    sub_6F938250(&unk_6FB49A1C);
    word_6FB49A24 = -1;
    dword_6FB49A20 = v8;
    dword_6FB49A00 = (int)off_6FBAF5C4;
    v6 = (int (__cdecl *)(signed int))v9(2);
    dword_6FB49A40 = (int)off_6FBB06B4;
    v9 = v6;
    dword_6FB49A44 = 0;
    dword_6FB49A48 = 0;
    dword_6FB49A4C = 0;
    dword_6FB49A50 = 0;
    dword_6FB49A54 = 0;
    dword_6FB49A58 = 0;
    sub_6F938250(&unk_6FB49A5C);
    dword_6FB49A40 = (int)off_6FBAF5C4;
    dword_6FB49A60 = (int)v9;
    word_6FB49A64 = -1;
    sub_6F956880((int)&dword_6FB4A464);
    dword_6FB4A4D4 = 0;
    word_6FB4A4D8 = 0;
    byte_6FB4A4DA = 0;
    dword_6FB4A4DC = 0;
    dword_6FB4A4E0 = 0;
    dword_6FB4A4E4 = 0;
    dword_6FB4A4E8 = 0;
    dword_6FB4A460 = (int)off_6FBB04BC;
    dword_6FB4A464 = (int)off_6FBB04D0;
    v11 = 4;
    sub_6F958990(&dword_6FB4A464, (int)&dword_6FB49A80);
    sub_6F956880((int)&dword_6FB4A288);
    dword_6FB4A2F8 = 0;
    word_6FB4A2FC = 0;
    byte_6FB4A2FE = 0;
    dword_6FB4A300 = 0;
    dword_6FB4A304 = 0;
    dword_6FB4A308 = 0;
    dword_6FB4A30C = 0;
    dword_6FB4A280 = (int)off_6FBB0494;
    dword_6FB4A288 = (int)off_6FBB04A8;
    dword_6FB4A284 = 0;
    v11 = 3;
    sub_6F958990(&dword_6FB4A288, (int)&dword_6FB49A00);
    sub_6F956880((int)&dword_6FB4A324);
    dword_6FB4A394 = 0;
    word_6FB4A398 = 0;
    byte_6FB4A39A = 0;
    dword_6FB4A39C = 0;
    dword_6FB4A3A0 = 0;
    dword_6FB4A3A4 = 0;
    dword_6FB4A3A8 = 0;
    dword_6FB4A320 = (int)off_6FBB04BC;
    dword_6FB4A324 = (int)off_6FBB04D0;
    v11 = 2;
    sub_6F958990(&dword_6FB4A324, (int)&dword_6FB49A40);
    sub_6F956880((int)&dword_6FB4A3C4);
    dword_6FB4A434 = 0;
    word_6FB4A438 = 0;
    byte_6FB4A43A = 0;
    dword_6FB4A43C = 0;
    dword_6FB4A440 = 0;
    dword_6FB4A444 = 0;
    dword_6FB4A448 = 0;
    dword_6FB4A3C0 = (int)off_6FBB04BC;
    dword_6FB4A3C4 = (int)off_6FBB04D0;
    v11 = 1;
    sub_6F958990(&dword_6FB4A3C4, (int)&dword_6FB49A40);
    dword_6FB4A330 |= 0x2000u;
    dword_6FB4A2F8 = (int)&dword_6FB4A460;
    dword_6FB4A394 = (int)&dword_6FB4A460;
    _InterlockedAdd((volatile signed __int32 *)&dword_6FB49FC8, 1u);
    result = sub_6F8A1AD0((int *)&v10);
  }
  return result;
}
