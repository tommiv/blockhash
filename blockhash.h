__declspec(dllexport) char* blockhash_quick_string(int bits, unsigned char *data, int width, int height);

__declspec(dllexport) char* blockhash_string(int bits, unsigned char *data, int width, int height);

__declspec(dllexport) void release_hash_string(char* hash);