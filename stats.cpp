#include "stats.hpp"
namespace graph {
namespace stats {

int32_t get_max_degree(const graph :: VerySimpleGraphInterface * graph) {
	int32_t max_degree = -1;
	for(int n = 0; n < graph -> numNodes(); n++) {
		const int32_t deg = graph->degree(n);
		if(max_degree < deg)
			max_degree = deg;
	}
	assert(max_degree >= 0);
	return max_degree;
}

} // namespace graph
} // namespace stats
