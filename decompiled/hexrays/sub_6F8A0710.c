int __cdecl sub_6F8A0710()
{
  int result; // eax@2
  int v1; // ebx@3
  DWORD v2; // ebp@3
  DWORD v3; // edi@3
  DWORD v4; // esi@3
  int v5; // edx@4
  int v6; // [sp+10h] [bp-2Ch]@1
  int v7; // [sp+14h] [bp-28h]@1
  int v8; // [sp+18h] [bp-24h]@3
  int v9; // [sp+1Ch] [bp-20h]@3

  v6 = 0;
  v7 = 0;
  if ( dword_6FB4A51C == -1153374642 )
  {
    GetSystemTimeAsFileTime((LPFILETIME)&v6);
    v1 = v7 ^ v6;
    v2 = GetCurrentProcessId();
    v3 = GetCurrentThreadId();
    v4 = GetTickCount();
    QueryPerformanceCounter((LARGE_INTEGER *)&v8);
    result = v4 ^ v3 ^ v2 ^ v9 ^ v1 ^ v8;
    if ( result == -1153374642 )
    {
      v5 = 1153374640;
      result = -1153374641;
    }
    else
    {
      v5 = ~result;
    }
    dword_6FB4A51C = result;
    dword_6FB4A520 = v5;
  }
  else
  {
    result = ~dword_6FB4A51C;
    dword_6FB4A520 = ~dword_6FB4A51C;
  }
  return result;
}
